/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:33:56 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/04/28 12:16:46 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La función strlcat sirve para pegar una cadena de texto al final de otra,
 pero el dest tiene que tener espacio suficiente
Busca el final de dest, para saber cuánto espacio ya se usó.
Calcula cuánto espacio queda: size menos lo que ya ocupa dest.
Pega letras de src al final de dest, una por una, hasta que ya no quepa más
o se termine src.
Asegura que dest termine con un carácter nulo (\0), 
para que siga siendo una cadena válida.
Devuelve el tamaño necesario dst+src.
Así puedes saber si cortó algo por falta de espacio.*/

#include "libft.h"
#include <stddef.h>
//#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (size <= lendst)
	{
		return (lensrc + size);
	}
	i = 0;
	while (src[i] && (lendst + i + 1 < size))
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = 0;
	return (lendst + lensrc);
}
/*int	main(void)
{
	size_t	size = 20;
	const char	*src = "Tardes";
	char	dst[20] = "Buenas";
	size_t ret = ft_strlcat(dst, src, size);
	printf("Resultado: %s\n", dst);
	printf("Valor devuelto: %zu\n", ret);
	return (0);
}*/