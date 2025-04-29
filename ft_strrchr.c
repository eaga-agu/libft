/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 09:44:02 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/04/24 11:33:03 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//busca la ultima aparicion del caracter "c" en la cadena "str"
#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	a;

	a = (char)c;
	i = 0;
	if (a == 0)
		return ((char *)&str[i]);
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)a)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}
/*int	main(void)
{
	const char	str[] = "Helado de chocolate";
	char 		c = 'o';
	char		*result = ft_strrchr(str, c);

	if (result)
		printf("La última aparacion de '%c' encontrada en: %s\n", c, result);
	else
		printf("Caracter '%c' no encontrado.\n", c);
	
	return (0);	
}*/