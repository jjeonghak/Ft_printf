#include "ft_printf.h"

static int	parsing_subseq(t_spec *fs, va_list ap, const char *format, int *i)
{
	init_format_specifier(fs);
	while (*(format + *i) != '\0')
	{
		if (ft_strchr(FALGS, *(format + *i))
			parsing_flags(fs, format, i);
		else if (*(format + *i) == '.')
			parsing_precision(fs, ap, format, i);
		else if (ft_isdigit(*(format + *i)) || *(format + *i) == '*')
			parsing_width(fs, ap, format, i);
		else
			break ;
	}
	if (fs->width > INF || fs->precision > INF)
	{
		fs->error_check = 1;
		return (0);
	}
	//제일 마지막에 나오는 길이가 최종길이
	else
		return (parsing_specifier(fs, ap, *(format + *i)));
		//specifier가 존재하지 않는경우도 포함됨
}

static int	parsing_format(va_list ap, const char *format)
{
	int		i;
	unsigned int	pcnt;
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
			pcnt += (unsigned int)pasing_subseq(fs, ap, format, &i);
			if (pcnt > INF || fs->error_check)
				return (-1);
		}
		else
			pcnt += (unsigned int)ft_putchar_fd(*(format + i), 1);
		i++;
	}
	free(fs);
	return ((int)pcnt);
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
