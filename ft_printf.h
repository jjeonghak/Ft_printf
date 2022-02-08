#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdlib.h>
# include<unistd.h>
# include<stdarg.h>

# define INF 2147483647
# define FLAGS "-+ #0"

typedef struct s_spec
{
	int				error_check;
	unsigned int	flags;
	unsigned int	width;
	unsigend int	precision;
}		t_spec;

#endif
