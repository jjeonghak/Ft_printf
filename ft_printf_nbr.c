/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:45:17 by jeonghak          #+#    #+#             */
/*   Updated: 2022/02/24 13:26:46 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include<stdio.h>
//음수 int의 경우 unsigned long long 시 부호비트까지 고려가 필요
//또한 % 연산 중에 음수방지 필수
static char	*ntoa_base(t_spec *fs, unsigned long long n)
{
	char	*nbr;
	int		size;

	size = intlen_base(fs, n);
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
		if (fs->spec == 'p' || (fs->flags & 2 && fs->spec == 'x'))
			buf = ft_strdup("0x");
		else if (fs->flags & 2 && fs->spec == 'X')
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

static char	*add_suffix(t_spec *fs, char *p, unsigned long long n)
{
	char	*nbr;
	char	*mid;
	char	*suffix;

	suffix = NULL;
	if (fs->precision == 0 && n == 0)
		return (ft_strdup(""));
	nbr = ntoa_base(fs, n);
	if (nbr == NULL || p == NULL)
	{
		free(nbr);
		return (NULL);
	}
	if (fs->precision != -1)
	{
		if ((!(fs->flags & 16) || fs->base == 16) && fs->flags & 2 && fs->precision < fs->width)
			mid = putchar_buf('0', (int)fs->width - ft_strlen(nbr) - ft_strlen(p));
		else
			mid = putchar_buf('0', (int)fs->precision - ft_strlen(nbr));
	}
	else if ((!(fs->flags & 16) || fs->base == 16) && fs->flags & 2)
		mid = putchar_buf('0', (int)fs->width - ft_strlen(nbr) - ft_strlen(p));
	else
		mid = ft_strdup("");
	if (mid != NULL)
		suffix = ft_strjoin(mid, nbr);
	free(nbr);
	free(mid);
	return (suffix);
}

static char	*merge_width(t_spec *fs, char *p, char *s)
{
	char	*width;
	char	*result;
	
	fs->width -= ((long long)(ft_strlen(p) + ft_strlen(s)) + fs->precision);
	if (fs->precision == -1)
		fs->width++;
	if (fs->flags & 16 || !(fs->flags & 1))
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
	int		result;

	prefix = add_prefix(fs, n);
	suffix = add_suffix(fs, prefix, n);
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
	free(suffix);
	free(buf);
	return (result);
}
