/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eva <eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 09:44:02 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/05/03 13:40:44 by eva              ###   ########.fr       */
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
	while (str[i])
		i++;
	if (a == '\0')
		return ((char *)&str[i]);
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