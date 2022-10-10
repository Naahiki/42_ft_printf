/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_condition.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:14:47 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/10/10 11:14:57 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_condition(va_list arg, char c)
{
	int	cont;

	cont = 0;
	if (c == 'c')
		cont = ft_putchar(va_arg(arg, int));
	if (c == 's')
		cont = ft_putstr(va_arg(arg, char *));
	if (c == '%')
		cont = ft_putchar('%');
	if (c == 'i' || c == 'd')
		cont = ft_putnbr(va_arg(arg, int));
	if (c == 'u')
		cont = ft_put_unsignednb(va_arg(arg, unsigned int));
	if (c == 'x' || c == 'X')
		cont = ft_puthexa(va_arg(arg, unsigned int), c);
	if (c == 'p')
		cont = ft_putstr("0x") + ft_puthexa(va_arg(arg, size_t), c);
	return (cont);
}
