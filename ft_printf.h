/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:32:03 by jeonghak          #+#    #+#             */
/*   Updated: 2022/02/23 13:09:55 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdlib.h>
# include<unistd.h>
# include<stdarg.h>

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

#endif
