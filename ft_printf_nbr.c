#include "ft_printf.h"

static char	add_prefix(t_spec *fs, unsigned long long n)
{
	char	*buf;

	buf = ft_strdup("");
	if (fs->spec == 'p' || fs->spec == 'x' || fs->spec == 'X')
	{
		fs->base = 1;
		if (fs->spec == 'p' || (fs->flags & 2 && fs->spec == 'x'))
			buf = ft_strjoin("0x", buf);
		else if (fs->flags & 2 && fs->spec == 'X')
			buf = ft_strjoin("0X", buf);
		fs->width -= 2;
	}
	else if (fs->flags & 12 && (fs->spec == 'd' || fs->spec == 'i'))
	{
		buf = ft_strjoin(putchar_buf(fs->prefix, 1), buf);
		fs->width -= 1;
	}
}

static char	make_str(char *buf, t_spec *fs, unsigned long long n)
{
	if (buf == NULL)
		return (NULL);
	
}

int	print_width_nbr(t_spec *fs, unsigned long long n)
{
	char	*buf;
	int		result;

	buf = add_prefix(fs, n);
	buf = make_str(buf, fs, n);
	if (buf == NULL)
	{
		fs->error = 1;
		return (0);
	}
	result = ft_strlen(buf);
	ft_putstr_fd(buf, 1);
	free(buf);
	return (result);
}
