/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:37:05 by jeonghak          #+#    #+#             */
/*   Updated: 2022/02/21 12:34:23 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*putchar_buf(int c, int size)
{
	char	*buf;
	int		cnt;

	cnt = 0;
	buf = (char *)malloc(size + 1);
	if (buf == NULL || size < 0)
		return (NULL);
	while (cnt < size)
	{
		*(buf + cnt) = c;
		cnt++;
	}
	*(buf + cnt) = '\0';
	return (buf);
}

void	init_format_specifier(t_spec *fs, unsigned int pcnt)
{
	fs->prefix = NULL;
	fs->spec = 0;
	fs->error = 0;
	fs->flags = 0;
	fs->base = 0;
	fs->total_width = pcnt;
	fs->width = 0;
	fs->precision = -1;
	return ;
}

long long	atoi_format(const char *format, int *i)
{
	long long	result;

	result = 0;
	while (ft_isdigit(*(format + *i) && *(format + *i) != '\0'))
	{
		if (result < INF)
		{
			result *= 10;
			result += *(format + *i) - '0';
		}
		*i += 1;
	}
	return (result);
}
