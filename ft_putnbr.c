#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
		return (ft_putstr("-2147483648"));
	if (nb < 0)
	{
		nb *= -1;
		i = ft_putchar('-');
	}
	if (nb > 9)
		i+= ft_putnbr(nb / 10);
	i += ft_putchar((nb % 10) + '0');
	return (i);
}
