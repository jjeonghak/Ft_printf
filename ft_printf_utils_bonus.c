/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:37:05 by jeonghak          #+#    #+#             */
/*   Updated: 2022/02/27 14:37:03 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

char	*putchar_buf(int c, int size)
{
	char	*buf;
	int		cnt;

	cnt = 0;
	if (size <= 0)
		return (ft_strdup(""));
	buf = (char *)malloc(size + 1);
	if (buf == NULL)
		return (NULL);
	while (cnt < size)
	{
		*(buf + cnt) = c;
		cnt++;
	}
	*(buf + cnt) = '\0';
	return (buf);
}

long long	atoi_format(const char *format, int *i)
{
	long long	result;

	result = 0;
	while (ft_isdigit(*(format + *i)) && *(format + *i) != '\0')
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

int	intlen_base(t_spec *fs, unsigned long long n)
{
	int	cnt;

	cnt = 0;
	while (n)
	{
		cnt++;
		n /= fs->base;
	}
	if (cnt == 0)
		return (1);
	return (cnt);
}
