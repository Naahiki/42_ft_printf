
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
		if (s[i] == '%')
		{
		
			cont = cont + ft_checkcondition(arg, s[i + 1]);
			i++;
		}
		else  
		{
			cont = cont + ft_putchar(s[i]);
				i++;
		}
	}
	va_end(arg);
	return(cont);
}
