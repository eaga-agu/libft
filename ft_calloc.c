/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eva <eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:44:44 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/05/03 11:52:47 by eva              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La función te da un bloque de memoria limpia/vacios,
ya que todos contienen 0.
Si no tiene espacio devuelve NULL
Se usa bzero para poner a 0 todos*/

#include "libft.h"
//#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc (nmemb * size);
	if (nmemb && size && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	if (!p)
		return (NULL);
	ft_bzero (p, (nmemb * size));
	return (p);
}
/*int	main(void)
{
	size_t	nmemb = 1;
	size_t	size = 8;
	void	*p;

	p = ft_calloc(nmemb, size);
	printf("Hola %s", (char *)p);
	return (0);
}*/
