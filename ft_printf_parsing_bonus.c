/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parsing_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:01:48 by jeonghak          #+#    #+#             */
/*   Updated: 2022/02/27 14:37:18 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	select_sign(t_spec *fs, unsigned long long n)
{
	if ((int)n < 0)
		fs->sign = '-';
	else if (fs->flags & 8)
		fs->sign = '+';
	else if (fs->flags & 4)
		fs->sign = ' ';
	return ;
}

void	parse_flags(t_spec *fs, const char *format, int *i)
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
	return ;
}

void	parse_width(t_spec *fs, va_list ap, const char *format, int *i)
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

void	parse_precision(t_spec *fs, va_list ap, const char *format, int *i)
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
	if (result >= 0)
		fs->precision = result;
	return ;
}

int	parse_specifier(t_spec *fs, va_list ap)
{
	unsigned long long	n;

	if (fs->spec == 'c')
		return (print_width_char(fs, va_arg(ap, int)));
	else if (fs->spec == 's')
		return (print_width_str(fs, va_arg(ap, char *)));
	else if (fs->spec == '%')
		return (print_width_char(fs, '%'));
	if (fs->precision != -1 && fs->flags & 1)
		fs->flags -= 1;
	if (fs->spec == 'p')
		return (print_nbr(fs, va_arg(ap, unsigned long long)));
	else
	{
		n = va_arg(ap, unsigned int);
		select_sign(fs, n);
		return (print_nbr(fs, n));
	}
}
