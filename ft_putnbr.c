#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (0);
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr( n / 10);
		ft_putnbr( n % 10);
	}
	else
	{
		ft_putchar(48 + n);
	}
}