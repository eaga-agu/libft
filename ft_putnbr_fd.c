/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 11:30:29 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/05/02 13:00:27 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Envía el número ’n’ al file descriptor dado.
coge el numero entero n y lo convierte a caracter y lo 
escribe en el file descriptor*/

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
	ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
	}
}

/*int main(void)
{
	int numero = 1234;

	ft_putstr_fd("Usando ft_putnbr_fd:\n", 1);
	ft_putnbr_fd(numero, 1);
	ft_putchar_fd('\n', 1);
	return 0;
}*/
