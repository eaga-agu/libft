/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:42:22 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/04/23 13:12:48 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
/*#include <stdio.h>

int	main(void)
{
	char	origin[] = "Hola mundo";
	char	buffer[8];
	size_t	result;

	result = ft_strlcpy(buffer, origin, sizeof(buffer));

	printf("Texto original: \"%s\"\n", origin);
	printf("Texto copiado : \"%s\"\n", buffer);
	printf("Longitud total del source: %zu\n", result);
}*/
/* Copia hasta size - 1 caracteres
Agrega un '\0' al final para cerrar el mensaje.
Devuelve el tamaño real del mensaje original (strlen(src)),
por si quieres saber si cabía o no
Calcular la longitud del string fuente: while (src[src_len])
src_len++
*Si hay espacio en dst, copiar hasta size - 1 caracteres:
if (size > 0)*/