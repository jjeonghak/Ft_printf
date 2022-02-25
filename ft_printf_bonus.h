/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:32:03 by jeonghak          #+#    #+#             */
/*   Updated: 2022/02/25 11:56:01 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include<stdarg.h>
# include"./libft/libft.h"

# define INF 2147483647
# define FLAGS "-+ #0"
# define SPECS "cspdiuxX%"

typedef struct s_spec
{
	char			spec;
	char			sign;
	int				error;
	int				flags;
	int				base;
	unsigned int	total_width;
	long long		width;
	long long		precision;
}		t_spec;

int			ft_printf(const char *format, ...);
int			parse_specifier(t_spec *fs, va_list ap);
int			print_width_char(t_spec *fs, char c);
int			print_width_str(t_spec *fs, char *s);
int			print_nbr(t_spec *fs, unsigned long long n);
int			intlen_base(t_spec *fs, unsigned long long n);

long long	atoi_format(const char *format, int *i);

void		parse_flags(t_spec *fs, const char *format, int *i);
void		parse_width(t_spec *fs, va_list ap, const char *format, int *i);
void		parse_precision(t_spec *fs, va_list ap, const char *format, int *i);
void		print_width(int len, t_spec *fs);

char		*putchar_buf(int c, int size);

#endif
