/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_condition.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:01:35 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/10/12 11:01:46 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_condition(va_list arg, char c)
{
	int	cont;

	cont = 0;
	if (c == 'c')
		cont = ft_putchar(va_arg (arg, int));
	else if (c == 's')
		cont = ft_putstr(va_arg (arg, char *));
	else if (c == 'p')
		cont = ft_putstr("0x") + ft_puthexa(va_arg (arg, size_t), c);
	else if (c == 'd' || c == 'i')
		cont = ft_putnbr(va_arg (arg, int));
	else if (c == 'u')
		cont = ft_put_unsignednb(va_arg (arg, unsigned int));
	else if (c == 'x' || c == 'X')
		cont = ft_puthexa(va_arg (arg, unsigned int), c);
	else if (c == '%')
		cont = ft_putchar('%');
	return (cont);
}
