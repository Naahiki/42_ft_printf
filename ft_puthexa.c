/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:26:55 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/10/12 11:29:18 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***************EJEMPLO CALCULO HEXADECIMAL********************/
/* El numero 2619 decimal en hexadecimal es A3B ¿Como se calcula?*/
/* Hexadecimal puede tener estos valores: 0123456789ABCDEF, donde A=10, B=11;
 *  C=12, D=13, E=14, F=15.
 * Si nuestro numero esn = 2619 (decimal)
2619 / 16 = 163 (2619 % 16 = módulo = 11, donde en hexadecimal 11 = B)
163 / 16 = 10 (163 % 16 = módulo = 3)
10 / 16 = 0 (10 %16 = módulo = 10, donde en hexadecimal 10 = A)
Resultado: A3B*/

#include "ft_printf.h"

int	ft_puthexa(size_t arg, char c)
{
	int	i;

	i = 0;
	if (c == 'p' || c == 'x')
	{
		if (arg >= 16)
			i += ft_puthexa(arg / 16, c);
		i += ft_putchar("0123456789abcdef"[arg % 16]);
	}
	if (c == 'X')
	{
		if (arg >= 16)
			i += ft_puthexa(arg / 16, c);
		i += ft_putchar("0123456789ABCDEF"[arg % 16]);
	}
	return (i);
}
