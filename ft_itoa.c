/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eva <eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:40:45 by eva               #+#    #+#             */
/*   Updated: 2025/05/03 08:51:05 by eva              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*hacer una función que coja un numero entero int 
en una cadena terminada en null
La función devuelve como resultado un arreglo de caracteres
y hace una reserva de memoria con malloc*/

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

static int	ft_numlen(int num)
{
	int	len;

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
	long	num;
	char	*res;
	int		len;

	num = (long)nbr;
	len = ft_numlen(nbr);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (num < 0)
	{
		res[0] = '-';
		num = -num;
	}
	if (num == 0)
		res[0] = '0';
	while (num > 0)
	{
		res[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (res);
}
/*int	main(void)
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
}*/
