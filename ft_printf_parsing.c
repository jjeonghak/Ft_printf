#include "ft_printf.h"

void	parsing_flags(t_spec *fs, const char *format, int *i)
{
	while (ft_strchr(FLAGS, *(format + *i)))
	{
		if (*(format + *i) == '-')
			fs->flags |= 16;
		else if (*(format + *i) == '+')
			fs->flags |= 8;
		else if (*(format + *i) == ' ')
			fs->flags |= 4;
		else if (*(format + *i) == '#')
			fs->flags |= 2;
		else if (*(format + *i) == '0')
			fs->flags |= 1;
		*i += 1;
	}
	return ;
}

void	parsing_width(t_spec *fs, va_list ap, const char *format, int *i)
{
	unsinged int	result;

	result = 0;
	if (*(format + *i) == '*')
	{
		result = va_arg(ap, int);
		*i += 1;
	}
	else
	{
		while (ft_isdigit(*(format + *i)) && result < WMAX)
		{
			result *= 10;
			result += *(format + *i) - '0';
			if (result > WIDTH_MAX)
				break ;
			*i += 1;
		}
	}
	fs->width = result;
	return ;
}

void	parsing_precision(t_spec *fs, va_list ap, const char *format, int *i)
{
	int	result;

	result = 0;
	if (*(format + *i) != '.')
		return ;
	*i += 1;
	if (*(format + *i) == '*')
	{
		result = va_arg(ap, int);
		*i += 1;
	}
	else
	{
		while (ft_isdigit(*(format + *i)) && result < WMAX)
		{
			result *= 10;
			result += *(format + *i) - '0';
			*i += 1;
		}
	}
	fs->precision = result;
	return ;
}

int	parsing_specifier(t_spec *fs, va_lsit ap, int spec)
{
	if (spec == 'c')
		return (print_width_char(fs, va_arg(ap, int)));
	else if (spec == 's')
		return (print_width_str(fs, va_arg(ap, char *)));
	else if (spec == 'p')
		return (print_width_nbr(fs, va_arg(ap, unsinged long long)));
	else if (spec == 'u' || spec == 'x' || spec == 'X')
		return (print_width_nbr(fs, va_arg(ap, unsigned int)));
	else if (spec == 'd' || spec == 'i')
		return (print_width_nbr(fs, va_arg(ap, int)));
	else if (spec == '%')
		return (print_width_char(fs, '%'));
	else
		return (print_nospec(fs));
}
