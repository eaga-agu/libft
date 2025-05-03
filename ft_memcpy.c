/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eva <eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:27:48 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/05/03 13:34:39 by eva              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	const char	*src = "Hola Mundo";
	char	dest[20];
	
	ft_memcpy(dest, src, 5);
	dest[5] = '\0';
	printf("resultado: %s/n", dest);
	return (0);
}*/
/*
La función memcpy copia datos de una parte de la memoria a otra
 dest destino, src origen, n bytes a copiar, reemplaza dest
se pone const void para que no se modifique la fuente, protección. Como se lee 
byte por byte hay que hacer un cast a unsigned char,es decirle al compilador:
Esta cosa de tipo desconocido, tratala como si fuera de tipo X */
