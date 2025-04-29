/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:33:50 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/04/29 13:27:22 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La función compara los n primeros bytes (unsigned char) de la memoria
de S1 y S2. 
La función retorna un entero con la diferencia de los n bytes: 0 si S1=S2,
positivo si S1>S2 y negativo S1<S2*/

#include "libft.h"
//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	const char s1[] = "perro";
	const char s2[] = "pira";
	
	int result = ft_memcmp(s1, s2, 2);
	printf ("comparación entre %s y %s: %d\n", s1, s2, result);
	return (0);
}*/