/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eva <eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:40:45 by eva               #+#    #+#             */
/*   Updated: 2025/05/01 09:24:30 by eva              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*hacer una función que coja un numero entero int en una cadena terminada en null
La función devuelve como resultado un arreglo de caracteres
y hace una reserva de memoria con malloc*/

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

static int	ft_numlen(int num)
{
	int len;
	
	if (num <= 0)
    	len = 1;
	else
    	len = 0;
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	long	pos;
	char	*res;
	int 	len;

	len = ft_numlen(nbr);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	pos = len - 1;
	if (nbr < 0)
	{
		if (nbr == INT_MIN)
			return ("-2147483648");
		nbr = nbr * -1;
		res[0] = '-';
	}	
	while (nbr > 9)
	{
		res[pos] = (nbr % 10) + '0';
		nbr = nbr / 10;
		pos--;
		res[pos] = nbr + '0';
	}
	return (res);
}
int	main(void)
{
	int numeros[] = {0, 123, -456, 2147483647, -2147483648};
	int cantidad = sizeof(numeros) / sizeof(numeros[0]);
	
	for (int i = 0; i < cantidad; i++)
	{
		char *resultado = ft_itoa(numeros[i]);
		if (resultado)
		{
			printf("ft_itoa(%d) = %s\n", numeros[i], resultado);
			free(resultado);
		}
		else
		{
			printf("Error al convertir %d\n", numeros[i]);
		}
	}
		return 0;
}
