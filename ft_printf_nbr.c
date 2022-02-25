/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:45:17 by jeonghak          #+#    #+#             */
/*   Updated: 2022/02/25 11:45:10 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ntoa_base(t_spec *fs, unsigned long long n)
{
	char	*nbr;
	int		size;

	if ((fs->spec == 'd' || fs->spec == 'i') && n > INF)
		n = (unsigned int)INF + 1 - (n - INF - 1);
	size = intlen_base(fs, n);
	if (fs->precision == 0 && n == 0)
		return (ft_strdup(""));
	fs->width -= (long long)size;
	fs->precision -= (long long)size;
	nbr = (char *)malloc(size + 1);
	if (nbr == NULL)
		return (NULL);
	*(nbr + size) = '\0';
	while (size--)
	{
		if (fs->spec == 'X')
			*(nbr + size) = (char)*ft_substr("0123456789ABCDEF", n % 16, 1);
		else if (fs->base == 16)
			*(nbr + size) = (char)*ft_substr("0123456789abcdef", n % 16, 1);
		else
			*(nbr + size) = (char)*ft_substr("0123456789", n % 10, 1);
		n /= fs->base;
	}
	return (nbr);
}

static char	*add_prefix(t_spec *fs, unsigned long long n)
{
	char	*buf;

	if (fs->spec == 'p' || fs->spec == 'x' || fs->spec == 'X')
	{
		fs->base = 16;
		if (fs->spec == 'p' || (fs->flags & 2 && fs->spec == 'x' && n != 0))
			buf = ft_strdup("0x");
		else if (fs->flags & 2 && fs->spec == 'X' && n != 0)
			buf = ft_strdup("0X");
		else
			buf = ft_strdup("");
	}
	else if (((int)n < 0 || fs->flags & 12) && fs->spec != 'u')
		buf = putchar_buf(fs->sign, 1);
	else
		buf = ft_strdup("");
	if (buf != NULL)
		fs->width -= (long long)ft_strlen(buf);
	return (buf);
}

static char	*add_suffix(t_spec *fs, char *p, char *nbr, unsigned long long n)
{
	char	*mid;
	char	*suffix;
	int		size;

	size = 0;
	if (p == NULL || nbr == NULL)
		return (NULL);
	if (fs->precision == 0 && n == 0)
		return (ft_strdup(""));
	if (fs->precision < 0)
		fs->precision = -1;
	if (fs->precision != -1)
	{
		fs->width -= fs->precision;
		size += (int)fs->precision;
	}
	if (ft_strlen(p) && !(fs->flags & 16) && fs->flags & 1 && fs->width > 0)
	{
		size += (int)fs->width;
		fs->width = 0;
	}
	mid = putchar_buf('0', size);
	suffix = ft_strjoin(mid, nbr);
	free(mid);
	return (suffix);
}

static char	*merge_width(t_spec *fs, char *p, char *s)
{
	char	*width;
	char	*result;

	if (fs->width <= 0 && p != NULL && s != NULL)
		return (ft_strjoin(p, s));
	else if (fs->flags & 16 || !(fs->flags & 1))
		width = putchar_buf(' ', (int)fs->width);
	else
		width = putchar_buf('0', (int)fs->width);
	if (p == NULL || s == NULL || width == NULL)
	{
		free(width);
		return (NULL);
	}
	if (fs->flags & 16)
		result = ft_strjoin(ft_strjoin(p, s), width);
	else
		result = ft_strjoin(width, ft_strjoin(p, s));
	free(width);
	return (result);
}

int	print_nbr(t_spec *fs, unsigned long long n)
{
	char	*buf;
	char	*prefix;
	char	*suffix;
	char	*nbr;
	int		result;

	prefix = add_prefix(fs, n);
	nbr = ntoa_base(fs, n);
	suffix = add_suffix(fs, prefix, nbr, n);
	buf = merge_width(fs, prefix, suffix);
	if (buf == NULL)
	{
		fs->error = 1;
		result = 0;
	}
	else
	{
		result = ft_strlen(buf);
		ft_putstr_fd(buf, 1);
	}
	free(prefix);
	free(nbr);
	free(suffix);
	free(buf);
	return (result);
}
