/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:25:04 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/04/30 13:37:12 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
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
