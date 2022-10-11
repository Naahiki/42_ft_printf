#include "ft_printf.h"

int	ft_putstr(char *str)
{
	if(!str)
		return (write(1, "(NULL)", 6));
	return (write(1, str, ft_strlen(str)));
}
