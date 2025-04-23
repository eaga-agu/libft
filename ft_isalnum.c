/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:15:23 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/04/22 12:10:04 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*int main(void)
{
	int i;

	i = 0;
	while (i < 256)
	{
		if (ft_isalnum(i))
			printf("%d is alphanumeric\n", i);
		else
			printf("%d is not alphanumeric\n", i);
		i++;
	}
	return (0);
}*/
/* Esta funcion devuelve 1 si el caracter es alfanumerico y 0 si no lo es*/