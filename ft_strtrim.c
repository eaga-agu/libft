/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eva <eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:32:55 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/05/03 08:40:25 by eva              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Elimina todos los caracteres de la string ’set’ 
desde el principio y desde el final de ’s1’, 
hasta encontrar un caracter no perteneciente a ’set’
La string resultante se devuelve con una reserva de malloc(3*/

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	i = ft_strlen(s1);
	while (ft_strchr(set, s1[i - 1]) && i > 0)
		i--;
	return (ft_substr(s1, 0, i));
}
/*int main(void)
{
	const char *str1 = "itiHola  iti Mundoiti";
	const char *str2 = "##Hola Mundo##";
	const char *set1 = "iti";  // Solo espacios en el conjunto.
	const char *set2 = "#";  // Solo el carácter '#' en el conjunto.

	// Usando la primera implementación de ft_strtrim
	char *trimmed1 = ft_strtrim(str1, set1);  // Recorta los espacios
	char *trimmed2 = ft_strtrim(str2, set2);  // Recorta los #
	
	printf("Original 1: '%s'\n", str1);
	printf("Recortado 1: '%s'\n", trimmed1);  // Esperamos: "Hola Mundo"
	
	printf("Original 2: '%s'\n", str2);
	printf("Recortado 2: '%s'\n", trimmed2);  // Esperamos: "Hola Mundo"
	
	// Recuerda liberar la memoria después de usar ft_strtrim
	free(trimmed1);
	free(trimmed2);

	return 0;
}*/