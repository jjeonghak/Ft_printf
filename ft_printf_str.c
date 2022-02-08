#include "ft_printf.h"

void	print_width(int len, char c)
{
	while (len--)
		ft_putchar_fd(c, 1);
	return ;
}

int	print_width_char(t_spec *fs, char c)
{
	if (fs->width > 1)
	{
		if (fs->flags & 16)
		{
			ft_putchar_fd(c, 1);
			print_width(fs->width - 1, ' ');
		}
		else
		{
			print_width(fs->width - 1, ' ');
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
		print_width(fs->width - len, ' ');
	}
	else
	{
		print_width(fs->width - len, ' ');
		ft_putstr_fd((char *s), 1);
	}
	return ((int)(fs->width));
}
