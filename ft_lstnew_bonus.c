/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eva <eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 10:53:09 by eva               #+#    #+#             */
/*   Updated: 2025/05/04 11:14:30 by eva              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*int	main(void)
{
	int		x;
	t_list	* node;
	
	x = 42;	
	node = ft_lstnew(&x);
	if (node)
	{
		printf("Contenido: %d\n", *(int *)node->content);
		printf("Next: %p\n", (void *)node->next);
	}
	else
		printf("No se pudo crear el nodo\n");
	free(node);
	return (0);
}*/
