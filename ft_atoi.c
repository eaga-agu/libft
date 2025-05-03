/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eva <eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 08:51:19 by eva               #+#    #+#             */
/*   Updated: 2025/05/03 09:34:03 by eva              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*la función atoi convierte una serie de caracteres en un entero
para así poderlo utilizar en calculos
Toma como parametro una cadena de caracteres:*nptr y 
devuelve el valor del entero con su signo*/

#include "libft.h"
//#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;
	int	i;

	i = 0;
	sign = 1;
	result = 0;
	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\t' || *nptr == '\f'
		|| *nptr == '\v' || *nptr == '\r')
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	result *= sign;
	return (result);
}
/*int	main(void)
{
	const char *ejemplo1 = "1234";
	const char *ejemplo2 = "-452";
	const char *ejemplo3 = "  \n \t +999abc";
	printf("resultado 1: %d\n", ft_atoi(ejemplo1));
	printf("resultado 2: %d\n", ft_atoi(ejemplo2));
	printf("resultado 3: %d\n", ft_atoi(ejemplo3));
	return (0);
}*/