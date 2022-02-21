/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:31:33 by jeonghak          #+#    #+#             */
/*   Updated: 2022/02/08 18:31:38 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_width(int len, t_spec *fs)
{
	int	chr;

	chr = fs->flags & 1;
	while (len--)
	{
		if (chr)
			ft_putchar_fd('0', 1);
		else
			ft_putchar_fd(' ', 1);
	}
	return ;
}

int	print_width_char(t_spec *fs, char c)
{
	if (fs->width > 1)
	{
		if (fs->flags & 16)
		{
			ft_putchar_fd(c, 1);
			print_width(fs->width - 1. fs);
		}
		else
		{
			print_width(fs->width - 1, fs);
			ft_putchar_fd(c, 1);
		}
		return ((int)(fs->width));
	}
	ft_putchar_fd(c, 1);
	return (1);
}

int	print_width_str(t_spec *fs, char *s)
{
	int	len;

	if (s == NULL)
		return (print_width_str(fs, "(null)"));
	len = ft_strlen(s);
	if (len >= fs->width)
	{
		ft_putstr_fd((char *s), 1);
		return (len);
	}
	else if (fs->flags & 16)
	{
		ft_putstr_fd((char *s), 1);
		print_width(fs->width - len, fs);
	}
	else
	{
		print_width(fs->width - len, fs);
		ft_putstr_fd((char *s), 1);
	}
	return ((int)(fs->width));
}
