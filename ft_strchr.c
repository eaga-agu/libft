/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eva <eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:25:04 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/05/03 11:56:59 by eva              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*int	main(void)
{
	const char	*str = "hola mundo";
	char	*result = ft_strchr(str, 'o');
	if (result)
    {
        printf("Se encontró el carácter 'o' en: %s\n", result);
    }
    else
    {
        printf("El carácter 'o' no se encontró en la cadena.\n");
    }
	return(0);
}*/
