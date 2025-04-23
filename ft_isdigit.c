/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:14:07 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/04/22 12:13:16 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*int main(void)
{
	int i;

	i = 0;
	while (i < 256)
	{
		if (ft_isdigit(i))
			printf("%d is digit\n", i);
		else
			printf("%d is not digit\n", i);
		i++;
	}
	return (0);
}*/
/* Esta funcion devuelve 1 si el caracter es un digito y 0 si no lo es */