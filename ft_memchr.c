/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:39:16 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/04/24 14:41:50 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Buscar una cosa específica (el carácter c) dentro de una caja de memoria (s), 
mirando solo n lugares como máximo
size_t	i;i = 0; Se prepara un contador i, que empieza en 0.while (i < n)
Mientras no hayamos revisado los n lugares permitidos, seguimos buscando.
if (*((unsigned char *)s + i) == (unsigned char)c)
(unsigned char *)s + i: Se mueve a la posición i dentro de la caja.*((...) + i): 
Mira lo que hay dentro de esa posición.
(unsigned char)c: Convierte lo que buscamos en algo del mismo tipo.
Compara: “¿Lo que hay aquí es igual a lo que busco?”*/

#include <stdio.h>
#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	const void	*s = "lolo";
	size_t	n = 2;
	int	c ='o';
	void*resultado = ft_memchr(s, c, n);
	if (resultado != NULL)
		printf("¡Encontré la letra '%c'!\n", *(char *)resultado);
	else
		printf("No encontré la letra.\n");
	return (0);
}*/