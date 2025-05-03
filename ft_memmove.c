/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eva <eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:37:08 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/05/03 08:46:46 by eva              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La funcion copia n bytes de la memoria src a la dest, 
los maneja de forma segura
incluso si hay solapamiento, 
si se va a producir solapamiento copia de atrá adelante
dest<src copia hacia delante porque no se solapa, 
si dest>src copia de atras adelante
const char para evitar que src se borre. 
La función devuelve el puntero de dest*/

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i-- > 0)
			d[i] = s[i];
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	const char	*src = "Hola Mundo";
	char	dest[20];

	ft_memmove(dest, src, 5);
	dest[5] = '\0';
	printf("resultado: %s/n", dest);
	return (0);
}*/
