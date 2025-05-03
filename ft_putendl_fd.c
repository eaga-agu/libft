/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eva <eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 11:17:33 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/05/03 08:33:03 by eva              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Envia el string s al file descriptor dado seguido de un salto de linea)*/

//#include <fcntl.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write (fd, "\n", 1);
}

/*int	main(void)
{
	ft_putendl_fd("Hola en la pantalla!\n", 1);
	int fd = open("salida.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		ft_putendl_fd("Error al abrir el archivo\n", 2);
		return 1;
	}
	ft_putendl_fd("Hola en el archivo!\n", fd);
	close(fd);
	return 0;
}*/