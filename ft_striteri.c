/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 15:28:52 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/05/01 15:41:34 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*void to_upper_if_even(unsigned int i, char *c)
{
	if (i % 2 == 0 && c)
		*c = ft_toupper(*c);
}

int main(void)
{
	char palabra[] = "hola mundo";
	printf("Antes: %s\n", palabra);
	ft_striteri(palabra, to_upper_if_even);
	printf("Después: %s\n", palabra);
	return 0;
}*/
