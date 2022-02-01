#include "ft_printf.h"

void	init_format_specifier(t_spec *fs)
{
	fs->error_check = 0;
	fs->flags = 0;
	fs->width = 0;
	fs->precision = 0;
	return ;
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s, int n)
{
	write(1, s, n);
	return (n);
}
