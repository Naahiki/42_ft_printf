/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsignednb.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:03:49 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/10/12 11:05:30 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsignednb(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb > 9)
		i += ft_put_unsignednb(nb / 10);
	i += ft_putchar((nb % 10) + '0');
	return (i);
}
