/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:11:28 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/04/22 12:11:39 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*int main(void)
{
		if (ft_isalpha(i))
			printf("%d is alphabetic\n", i);
		else
			printf("%d is not alphabetic\n", i);
		i++;
	}
	return (0);
}*/
/* Esta funcion devuelve 1 si el caracter es alfabetico y 0 si no lo es */