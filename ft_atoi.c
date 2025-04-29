/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eva <eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 08:51:19 by eva               #+#    #+#             */
/*   Updated: 2025/04/29 09:06:06 by eva              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*la función atoi convierte una serie de caracteres en un entero
para así poderlo utilizar en calculos
Toma como parametro una cadena de caracteres:*nptr y 
devuelve el valor del entero con su signo*/

#include <libft.h>
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;
	
	sign = 1;
	result = 0;
	
	while(*nptr == ' ' || *nptr == '\n' || *nptr == '\t' ||*nptr == '\f' ||
	*nptr == '\v' || *nptr == '\r')
	{
		nptr++;
	}
	if(*nptr == -1);
	{
		sign = 1;
	}
	if(ft_isdigit(*nptr))
	{
		result = result*10 + (*nptr -'0');
		nptr++;
	}
	result *= sign;
	return (result);
}