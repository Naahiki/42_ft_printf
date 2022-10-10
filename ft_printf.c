/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:05:30 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/10/10 11:14:34 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		i;
	int		cont;

	i = 0;
	cont = 0;
	va_start(arg, s);
	while (s[i])
	{
		if (s[i] != '%')
		{
			cont = ft_putchar(s[i]);
			i++;
			cont++;
		}
		else
		{
			cont = cont + ft_check_condition(arg, s[i + 1]);
				i = i + 2;
		}
	}
	va_end (arg);
	return (cont);
}
