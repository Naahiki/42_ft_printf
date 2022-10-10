/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:05:30 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/10/10 11:09:39 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	arg;
<<<<<<< HEAD
	int		i;
	int		cont;
	int		k;
=======
	int	i;
	int	cont;
>>>>>>> fd7d05b57b24f3825d9843ee1b61b8ea04456866

	i = 0;
	cont = 0;
	va_start(arg, s);
	while (s[i])
	{
<<<<<<< HEAD
		if (s[i] == '%')
		{	
			cont = cont + ft_check_condition(arg, s[i + 1]);
			i++; /* i = i+2*/
=======
		if (s[i] != '%')
		{
		
			cont = ft_putchar(s[i]);
			i++;
			cont++;
>>>>>>> fd7d05b57b24f3825d9843ee1b61b8ea04456866
		}
		else  
		{
			cont = cont + ft_check_condition(arg, s[i + 1]);
				i = i + 2;
		}
	}
	va_end(arg);
	return(cont);
}
