/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eva <eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:14:32 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/05/03 08:30:56 by eva              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*#include <stdio.h>

int	main(void)
{
	char	a;

	a = ft_toupper('b');
	printf("Letra mayúscula: %c\n", ft_toupper('b'));
	return (0);
}*/
//convierte las minusculas en mayusculas 
//Si no son minusculas devuelve el caracter tal cual