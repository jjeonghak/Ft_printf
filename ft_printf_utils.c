#include "ft_printf.h"

void	init_format_specifier(t_spec *fs)
{
	fs->error_check = 0;
	fs->flags = 0;
	fs->width = 0;
	fs->precision = -1;
	return ;
}

int	nbrlen(t_spec *fs, unsigned long long  nbr);
{
	int	result;

	result = 0;
	if (fs->flags & 2 && fs->)
}
