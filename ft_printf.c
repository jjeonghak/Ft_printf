/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:31:15 by jeonghak          #+#    #+#             */
/*   Updated: 2022/03/04 13:28:35 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	init_format_specifier(t_spec *fs, unsigned int pcnt)
{
	fs->sign = 0;
	fs->spec = 0;
	fs->error = 0;
	fs->flags = 0;
	fs->base = 10;
	fs->total_width = pcnt;
	fs->width = 0;
	fs->precision = -1;
	return ;
}

static int	check_error(t_spec *fs, const char *format, int *i)
{
	if (*(format + *i) == '\0')
		return (0);
	else if (fs->width + (long long)fs->total_width >= INF)
		return (1);
	else if (*(format + *i) == 's' || *(format + *i) == 'c')
		return (0);
	else if (fs->precision != -1)
		if (fs->precision + (long long)fs->total_width >= INF)
			return (1);
	return (0);
}

static int	parse_subseq(t_spec *fs, va_list ap, const char *format, int *i)
{
	*i += 1;
	while (*(format + *i) != '\0')
	{
		if (ft_strchr(FLAGS, *(format + *i)))
			parse_flags(fs, format, i);
		else if (*(format + *i) == '.')
			parse_precision(fs, ap, format, i);
		else if (ft_isdigit(*(format + *i)) || *(format + *i) == '*')
			parse_width(fs, ap, format, i);
		else
			break ;
	}
	if (check_error(fs, format, i))
		fs->error = 1;
	else if (*(format + *i) != '\0')
	{
		fs->spec = *(format + *i);
		return (parse_specifier(fs, ap, i));
	}
	return (0);
}

static int	parse_format(va_list ap, const char *format)
{
	int				i;
	t_spec			fs;
	unsigned int	pcnt;

	i = 0;
	pcnt = 0;
	init_format_specifier(&fs, pcnt);
	while (*(format + i) != '\0')
	{
		if (fs.error || pcnt >= INF)
			return (-1);
		else if (*(format + i) == '%')
		{
			init_format_specifier(&fs, pcnt);
			pcnt += (unsigned int)parse_subseq(&fs, ap, format, &i);
		}
		else
		{
			ft_putchar_fd(*(format + i), 1);
			pcnt++;
			i++;
		}
	}
	return ((int)pcnt);
}

int	ft_printf(const char *format, ...)
{
	int		result;
	va_list	ap;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	result = parse_format(ap, format);
	va_end(ap);
	return (result);
}
