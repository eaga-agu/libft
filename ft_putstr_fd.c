/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 10:51:15 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/05/02 11:05:31 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Envía la string s al file descriptor especificado
el int fd puede ser 0 (teclado), 1 (pantalla), 2 (archivo)*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/*#include <fcntl.h>

int	main(void)
{
	ft_putstr_fd("Hola en la pantalla!\n", 1);
	int fd = open("salida.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		ft_putstr_fd("Error al abrir el archivo\n", 2);
		return 1;
	}
	ft_putstr_fd("Hola en el archivo!\n", fd);
	close(fd);
	return 0;
}*/