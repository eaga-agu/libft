/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:43:27 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/04/24 16:33:00 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Busca una mini palabra (little) dentro de una palabra más grande (big)
, pero solo puede mirar una cantidad limitada de letras (len).*/

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big && len == 0)
		return (NULL);
	if (!little[0])
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && big[i + j] == little[j] && (i + j) < len)
		{
			if (!little[j + 1])
				return ((char *)(big + i));
			++j;
		}
		++i;
	}
	return (NULL);
}

/*#include <stdio.h>

int main(void)
{
    const char *big = "Hola mundo bonito";
    const char *little = "lola";
    size_t len = 10;

    char *result = ft_strnstr(big, little, len);

    if (result != NULL)
        printf("¡Encontrado: %s\n", result);
    else
        printf("No encontrado.\n");

    return 0;
}*/
