/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eva <eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:04:34 by eaga-agu          #+#    #+#             */
/*   Updated: 2025/05/04 08:16:37 by eva              ###   ########.fr       */
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

/* asigna memoria dinamica a un array de strings al separar la strng "s"
en substrings con el caracter "c" como delimitador */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		count++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (count);
}

static char	*get_word(const char *str, int start, int stop)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (stop - start + 1));
	if (!word)
		return (NULL);
	i = -1;
	while (++i < (stop - start))
		word[i] = str[start + i];
	word[i] = 0;
	return (word);
}

static char	**free_all(char **split)
{
	int	i;

	i = -1;
	while (split[++i])
		free(split[i]);
	free(split);
	return (NULL);
}

static void	skip_first_delimiter(const char *str, char c, int *i, int *start)
{
	*i = 0;
	while (str[*i] && str[*i] == c)
		(*i)++;
	*start = *i;
	*i -= 1;
}

char	**ft_split(const char *str, char c)
{
	char	**split;
	int		i;
	int		word;
	int		start;

	if (! str)
		return (NULL);
	split = malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (!split)
		return (NULL);
	word = 0;
	skip_first_delimiter(str, c, &i, &start);
	while (str[++i])
	{
		if (str[i + 1] == c || !str[i + 1])
		{
			split[word] = get_word(str, start, i + 1);
			if (!split[word++])
				return (free_all(split));
			while (str[i + 1] && str[i + 1] == c)
				start = ++i + 1;
		}
	}
	split[word] = NULL;
	return (split);
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
