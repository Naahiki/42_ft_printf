
#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	va_start(arg, s);
	while (s[i])
	{
		if (s[i] != '%')
		{
		
			cont = ft_putchar(s[i]);
			i++;
			cont++;
		}
		else  
		{
			cont = cont + ft_check_condition(arg, s[i + 1]);
				i = i + 2;
		}
	}
	va_end(arg);
	return(cont);
}
