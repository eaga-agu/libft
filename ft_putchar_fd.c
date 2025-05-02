/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 10:37:58 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/05/02 11:01:01 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Envía el caracter 'c' al file descriptor especificad (fd)
Parámetros: 'c' el caracter a enviar e int fd, el file
descriptor sobre el que escribir
valor devuelto nada
l int fd puede ser 0 (teclado), 1 (pantalla), 2 (archivo)
La diferencia con putchar es que esta es más flexible porque eliges
donde escribes: pantalla, archivo u otro lugar
open(...): abre o crea el archivo.O_WRONLY → solo escribir.
O_CREAT → crear si no existe.
O_TRUNC → borrar el contenido anterior.
0644 → permisos del archivo.
fd es el número que representa el archivo abierto.
close(fd) cierra el archivo (¡muy importante!)*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*#include <fcntl.h>

int main(void)
{
	char caracter;
	int nombre_archivo;

	caracter = 'C';
	nombre_archivo = open("saludo.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putchar_fd(caracter, nombre_archivo);
	close(nombre_archivo);
	return (0);
}*/
