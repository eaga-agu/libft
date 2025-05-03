/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eva <eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 10:36:06 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/05/03 08:43:02 by eva              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La función reserva memoria con malloc para el substrig credo desde un string
devuelve el puntero al substring. La substtring empieza desde el indice start
y tiene una longitud máxima len*/

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1);

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

/*int	main(void)
{
	char			*s = "Hola Mundo";
	char			*sub1;
	char			*sub2;
	
	sub1 = ft_substr(s, 5, 3);
	printf("Sub1 (5,3): %s\n", sub1);
	sub2 = ft_substr(s, 7, 2);
	printf("Sub2 (7,2): %s\n", sub2);
	free(sub1);
	free(sub2);
	return (0);
}*/