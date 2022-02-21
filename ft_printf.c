/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:31:15 by jeonghak          #+#    #+#             */
/*   Updated: 2022/02/20 11:05:11 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_error(t_spec *fs, const char *format, int *i)
{
	if (*(format + *i) == '\0')
		return (1);
	else if (fs->width + (long long)fs->total_width > INF)
		return (1);
	else if (fs->precision + (long long)fs->total_width > INF)
		return (1);
	return (0);
}

static int	parsing_subseq(t_spec *fs, va_list ap, const char *format, int *i)
{
	while (*(format + *i) != '\0')
	{
		if (ft_strchr(FALGS, *(format + *i)))
			parsing_flags(fs, format, i);
		else if (*(format + *i) == '.')
			parsing_precision(fs, ap, format, i);
		else if (ft_isdigit(*(format + *i)) || *(format + *i) == '*')
			parsing_width(fs, ap, format, i);
		else if (ft_strchr(SPECS, *(format + *i)))
			break ;
		else
			*i += 1;
	}
	if (check_error(fs, format, i))
	{
		fs->error = 1;
		return (0);
	}
	else
	{
		fs->spec = *(format + *i);
		return (parsing_specifier(fs, ap));
	}
}

static int	parsing_format(va_list ap, const char *format)
{
	int				i;
	t_spec			fs;
	unsigned int	pcnt;

	i = 0;
	pcnt = 0;
	fs = (t_spec *)malloc(sizeof(t_spec *));
	if (fs == NULL)
		return (-1);
	while (*(format + i) != '\0')
	{
		if (*(format + i) == '%')
		{
			i++;
			init_format_specifier(fs, pcnt);
			pcnt += (unsigned int)pasing_subseq(fs, ap, format, &i);
		}
		else
			pcnt += (unsigned int)ft_putchar_fd(*(format + i), 1);
		i++;
		if (fs->error || (pcnt == INF && *(format + i) != '\0'))
			return (-1);
	}
	free(fs);
	return ((int)pcnt);
}

int	ft_printf(const char *format, ...)
{
	int		result;
	va_list	ap;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	result = parsing_format(ap, format);
	va_end(ap);
	return (result);
}
