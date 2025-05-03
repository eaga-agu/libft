/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eva <eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:40:27 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/05/03 08:41:58 by eva              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Función que crea una nueva string a partir de la concatenación de dos strings,
la función reserva memoria para que quepa ese nuevo string.
Hay que liberar el espacio con free*/

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s3;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	s3 = malloc(sizeof(char) * (len + 1));
	if (!s3)
		return (0);
	ft_strlcpy(s3, s1, len + 1);
	ft_strlcat(s3, s2, len + 1);
	return (s3);
}
/*int	main(void)
{
	const char	*s1 = "Hola ";
	const char	*s2 = "Mundo";
	char		*s3;
	s3 = ft_strjoin(s1, s2);
	printf("el nuevo string es: %s\n", s3);
	free (s3);
	return (0);
}*/
