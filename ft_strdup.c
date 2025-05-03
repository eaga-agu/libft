/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eva <eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 09:42:37 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/05/03 12:05:13 by eva              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Función que devuelve un puntero a la copia de un string original. 
La memoria del nuevo string de copia se obtien con malloc
La memoria tiene que ser liberada con free
Se usa size_t en lugar de int para evitar errores por signo
int puede ser negativo, lo que no tiene sentido para tamaños o índices de arrays
Usar size_t evita errores como desbordamientos negativos.*/

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	i;

	copy = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*int	main(void)
{
	char	*str = "Hola";
	char	*copy = ft_strdup(str);
	if(copy)
	{
		printf("original: %s\n", str);
		printf("Copia: %s\n", copy);
		free(copy);
	}
	else
		printf("Error al copiar/n");
	return (0);
}*/