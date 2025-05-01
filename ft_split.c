/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaga-agu <eaga-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:04:34 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/05/01 14:38:21 by eaga-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Corta un string cada vez que encuentra el caracter c
 y devuelve un array de substrings
Debe asignar NULL al terminar cada substring, tabmien hace una reserva de memoria
para el array de strings resultante
Se crean funciones estáticas para esta funcion
Lo primero es crear una funcion de conteo de palabras para saber cuantos strings
vamos a tener que devolver: comenzamos creando dos variables. 
La primera es un entero sin signo i que usaremos para movernos por la cadena
Usamos unsigned en caso de obtener una cadena excesivamente larga. 
También creamos una variable de contador que usaremos para contar
las palabras en la cadena y luego la devolveremos. 
NOTA: Esta función devuelve un entero estático. Una variable estática 
es una forma de evitar el uso de variables globales.
Una variable estática mantiene su valor entre invocaciones.
La usamos cuando una función necesita mantener algún estado entre invocaciones. 
Inicializamos ambas variables a 0
Despues creamos la funcion ft_strndup
que a diferencia de la ft_strdup copia como máximo n
(nuestro parámetro size_t) caracteres de la cadena dada, 
es decir copia las letras de una palabra,
terminando siempre con NULL la cadena copiada*/

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	ft_contwrd(char const *s, char c)
{
	unsigned int	i;
	int				cntr;

	i = 0;
	cntr = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			cntr++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (cntr);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < n && s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int				i;
	int				j;
	int				k;
	char			**tab;

	i = 0;
	k = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_contwrd(s, c)) + 1);
	if (tab == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			tab[k] = ft_strndup(s + j, i - j);
			k++;
		}
	}
	tab[k] = NULL;
	return (tab);
}
/*int main(void)
{
	char const *texto = "Hola, que tal estas?";
	char separador = ' ';
	char **palabras;
	int i = 0;

	palabras = ft_split(texto, separador);
	if (!palabras)
	{
		printf("Error: no se pudo dividir la cadena\n");
		return (1);
	}
	while (palabras[i])
	{
		printf("Palabra %d: %s\n", i, palabras[i]);
		free(palabras[i]);
		i++;
	}
	free(palabras);
	return (0);
	}*/
