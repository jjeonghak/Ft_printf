/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parsing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:31:22 by jeonghak          #+#    #+#             */
/*   Updated: 2022/02/21 11:53:32 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parsing_flags(t_spec *fs, const char *format, int *i)
{
	while (ft_strchr(FLAGS, *(format + *i)) && *(format + *i) != '\0')
	{
		if (*(format + *i) == '-')
			fs->flags |= 16;
		else if (*(format + *i) == '+')
			fs->flags |= 8;
		else if (*(format + *i) == ' ')
			fs->flags |= 4;
		else if (*(format + *i) == '#')
			fs->flags |= 2;
		else if (*(format + *i) == '0')
			fs->flags |= 1;
		*i += 1;
	}
	if (flags & 8)
		fs->prefix = '+';
	else if (flags & 4)
		fs->prefix = ' ';
	else if (flags & 2)
		fs->prefix = '0';
	return ;
}

void	parsing_width(t_spec *fs, va_list ap, const char *format, int *i)
{
	long long	result;

	if (*(format + *i) == '*')
	{
		result = va_arg(ap, int);
		if (result < 0)
		{
			result *= -1;
			fs->flags |= 16;
		}
		*i += 1;
	}
	else
		result = atoi_format(format, i);
	fs->width = result;
	return ;
}

void	parsing_precision(t_spec *fs, va_list ap, const char *format, int *i)
{
	long long	result;

	*i += 1;
	if (*(format + *i) == '*')
	{
		result = va_arg(ap, int);
		*i += 1;
	}
	else
		result = atoi_format(format, i);
	fs->precision = result;
	return ;
}

int	parsing_specifier(t_spec *fs, va_lsit ap)
{
	if (fs->spec == 'c')
		return (print_width_char(fs, va_arg(ap, int)));
	else if (fs->spec == 's')
		return (print_width_str(fs, va_arg(ap, char *)));
	else if (fs->spec == 'p')
		return (print_width_nbr(fs, va_arg(ap, unsigned long long)));
	else if (fs->spec == '%')
		return (print_width_char(fs, '%'));
	else
		return (print_width_nbr(fs, va_arg(ap, unsigned int)));
}
