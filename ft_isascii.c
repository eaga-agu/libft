/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:16:50 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/04/22 12:12:38 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*int main(void)
{
	int i;

	i = 0;
	while (i < 256)
	{
		if (ft_isascii(i))
			printf("%d is ascii\n", i);
		else
			printf("%d is not ascii\n", i);
		i++;
	}
	return (0);
}*/
/* Esta funcion devuelve 1 si el caracter es ascii y 0 si no lo es */