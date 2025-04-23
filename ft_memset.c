/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:38:39 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/04/22 14:50:18 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
// Esta funcion reserva n espacio en memoria para n bytes y lo inicializa a 0.
// La funcion devuelve un puntero al bloque de memoria reservado.

/*int	main(void)
{
	char str[50];

	ft_memset(str, 'A', 10);
	str[10] = '\0';
	printf("%s\n", str);
	return (0);
}*/