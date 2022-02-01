#include "ft_printf.h"

void	print_width(int len, char c)
{
	while (len--)
		ft_putchar(c);
	return ;
}

int	print_width_char(t_spec *fs, char c)
{
	if (fs->width > 1)
	{
		if (fs->flags & 16)
		{
			ft_putchar(c);
			print_width(fs->width - 1, ' ');
		}
		else
		{
			print_width(fs->width - 1, ' ');
			ft_putchar(c);
		}
		return (fs->width);
	}
	ft_putchar(c);
	return (1);
}

int	print_width_str(t_spec *fs, char *s)
{
	int	len;

	if (s == NULL)
		*s = "(null)";
	len = ft_strlen(s);
	if (len >= fs->width)
		return (ft_putstr(char *s), len);
	else if (fs->flags & 16)
	{
		ft_putstr((char *s), len);
		print_width(fs->width - len, ' ');
	}
	else
	{
		print_width(fs->width - len, ' ');
		ft_putstr((char *s), len);
	}
	return (fs->width);
}
