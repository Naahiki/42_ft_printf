
#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		i;
	int		count;
	
	count = 0;
	i = 0;
	va_start (arg, s);
	while (s[i] != '\0')
	{
		if (s[i] != '%')
		{
			ft_putchar(s[i]);
			count++;
			i++;
		}
		else
		{
			count += ft_check_condition(arg,s[i + 1]);
			i += 2;
		}
	}
	va_end(arg);
	return (count);
}
