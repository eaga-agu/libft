/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:36:33 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/04/24 12:01:48 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Compara los primeros n caracteres de las cadenas s1 y s2	
Devuelve la diferencia entre los dos primeros caracteres que difieren en el cadenas que se comparan si son iguales devuelve la resta, es decir 0
Si no son iguales devuelve la diferencia en posiciones ascii, es para comprobar si empiezan igual*/
#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int	i;

	i = 0;
	while((s1[i] || s2[i]) && i < n)
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
		return(0);
}

int	main(void)
{
		char	s1[] = "Gato";
		char	s2[] = "Galleta";
		int	i;
		int	n;
	
		n = 2;
		i = ft_strncmp(s1, s2, n);
		printf("%d\n",i);
}