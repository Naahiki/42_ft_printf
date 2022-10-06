#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>


int	ft_printf(const char *s, ...);
int	ft_putnbr(int n);
int	ft_putchar(char c);
int	ft_putstr(char *s);
size_t	ft_strlen(const char *s);
int	ft_puthexa(size_t nb, char c);
int	ft_put_unsignednb(unsigned int nb);
int	ft_checkcondition(va_list arg, char c);

#endif
