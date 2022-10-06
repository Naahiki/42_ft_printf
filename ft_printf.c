
#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int	i;
	int	cont;
	int	k;

	i = 0;
	cont = 0;
	va_start(arg, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
		
			cont = cont + ft_check_condition(arg, s[i + 1]);
			i++; /* i = i+2*/
		}
		else  
		{
			cont = cont + ft_putchar(s[i]);
				i++;
				cont++;
		}
	}
	va_end(arg);
	return(cont);
}
