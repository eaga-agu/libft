/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:29:54 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/04/22 15:27:02 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '0';
		i++;
	}
}
/*#include <stdio.h>

int	main(void)
{
	char	str[20] = "Hola Mundo";
	size_t	i;

	ft_bzero(str, 3);
	i = 0;
	while(i < 20)
	{
		printf("%c", str[i]);
		i++;
	}
	return (0);
}*/
//bzero es una función que pone en cero una cierta cantidad de memoria.