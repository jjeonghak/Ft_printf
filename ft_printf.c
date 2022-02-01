#include "ft_printf.h"

static int	parsing_subseq(t_spec *fs, va_list ap, const char *format, int *i)
{
	init_format_specifier(fs);
	parsing_flags(fs, format, i);
	parsing_width(fs, ap, format, i);
	parsing_precision(fs, ap, format, i);
	if (*(format + *i) == '\0' || fs->width > WMAX || fs->precision > WMAX)
	{
		fs->error_check = 1;
		return (0);
	}
	else
		return (parsing_specifier(fs, ap, *(format + *i)));
}

static int	parsing_format(va_list ap, const char *format)
{
	int		i;
	int		pcnt;
	t_spec	*fs;

	i = 0;
	pcnt = 0;
	fs = (t_spec *)malloc(sizeof(t_spec *));
	if (fs == NULL)
		return (-1);
	while (*(format + i) != '\0' && pcnt != -1)
	{
		if (*(format + i) == '%')
		{
			i++;
			pcnt += pasing_subseq(fs, ap, format, &i);
			if (fs->error_check)
				return (-1);
		}
		else
			pcnt += ft_putchar(*(format + i));
		i++;
	}
	free(fs);
	return (pcnt);
}

int	ft_printf(const char *format, ...)
{
	int		result;
	va_list	ap;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	result = parsing_format(ap, format);
	va_end(ap);
	return (result);
}
