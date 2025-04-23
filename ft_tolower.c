/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:24:29 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/04/23 14:25:56 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*#include <stdio.h>

int	main(void)
{
	char	a;

	a = ft_tolower('b');
	printf("Letra minúscula: %c\n", ft_tolower('b'));
	return (0);
}*/
//convierte las mayusculas en minusculas 
//Si no son mayusculas devuelve el caracter tal cual