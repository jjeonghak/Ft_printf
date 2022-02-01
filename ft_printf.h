#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdlib.h>
# include<unistd.h>
# include<stdarg.h>

# define WMAX 2147483614
# define FLAGS "-+ #0"

typedef struct s_spec
{
	int				error_check;
	unsigned int	flags;
	unsigned int	width;
	unsigned int	intprecision;
}		t_spec;

#endif
