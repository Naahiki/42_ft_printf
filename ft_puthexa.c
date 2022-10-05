/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:58:24 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/10/04 16:58:32 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***************EJEMPLO CALCULO HEXADECIMAL********************/
/* El numero 2619 decimal en hexadecimal es A3B ¿Como se calcula?*/
/* Hexadecimal puede tener estos valores: 0123456789ABCDEF, donde A=10, B=11; C=12, D=13, E=14, F=15.
 * Si nuestro numero esn = 2619 (decimal)
2619 / 16 = 163 (2619 % 16 = módulo = 11, donde en hexadecimal 11 = B)
163 / 16 = 10 (163 % 16 = módulo = 3)
10 / 16 = 0 (10 %16 = módulo = 10, donde en hexadecimal 10 = A)
Resultado: A3B*/
/*Estoy metiendo el puntero tambien*/

#include "ft_printf.h"

int	ft_puthexa(size_t nb, char c)
{
	int	i;

	i = 0;
	if (c == 'x' || c == 'p')
	{
		if (nb >= 16)
			i+=ft_puthexa(nb / 16, c);
		i+=ft_putchar("0123456789abcdef"[nb % 16]);
		return (i);
	}
	if (c == 'X')
	{
		if (nb >= 16)
			i+=ft_puthexa(nb / 16, c);
		i+=ft_putchar("0123456789ABCDEF"[nb % 16]);
		return (i);

	}
	return (0);
}
