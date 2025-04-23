/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:30:07 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/04/23 15:11:15 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fr_strchr(const char *str, int b)
{
	while (*str)
	{
		if (*str == (char)b)
			return ((char *)b);
		str++;
	}
	if ((char)b == '\0')
		return ((char *)str);
	return (0);
}
int	main(void)
{
	const char	str = "hola mundo";
	int			b = 'o';
	ft_strchr(str, 'o');
	
}
