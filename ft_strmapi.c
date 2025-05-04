/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eva <eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 15:00:41 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/05/04 08:22:02 by eva              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Aplica una funcion 'f' a cada caracter de la cadena 's'
pasando su índice como primer argumento y el propio caracter como segundo
Se crea una nueva cadena (usando malloc) para recoger los resultados de las
sucesivas aplicaciones de 'f'*/

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	size_t			len;
	char			*newstring;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len] != '\0')
		len++;
	newstring = (char *)malloc(len + 1);
	if (newstring == NULL)
		return (NULL);
	newstring[len] = '\0';
	i = 0;
	while (i < len)
	{
		newstring[i] = f(i, s[i]);
		i++;
	}
	return (newstring);
}

/*char to_upper_if_even(unsigned int i, char c)
{
    if (i % 2 == 0)
        return ft_toupper(c);
    return c;
}

int main(void)
{
	char *original = "hola mundo";
	char *modificada = ft_strmapi(original, to_upper_if_even);

	if (modificada)
	{
		printf("Original: %s\n", original);
		printf("Modificada: %s\n", modificada);
		free(modificada);
	}
	return 0;
}*/
