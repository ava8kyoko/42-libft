/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:20:27 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/25 16:00:25 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMÈTRES
** 	#1. La chaine de caractères à découper.
** 	#2. Le caractère délimitant.
**
** VALEUR DE RETOUR
** 	Le tableau de nouvelles chaines de caractères,
** résultant du découpage. NULL si l’allocation échoue.
**
** FONCTIONS EXTERNES AUTORISÉES
** malloc, free
**
** DESCRIPTION
** 	Alloue (avec malloc(3)) et retourne un tableau de chaines
** 	de caracteres obtenu en séparant ’s’ à	l’aide du caractère
** 	’c’, utilisé comme délimiteur.
** 	Le tableau doit être terminé par NULL.
*/

#include "libft.h"

static char	**malloc_error(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static char	*put_characters_Array(char *start_word, size_t len_word)
{
	char	*case_array;
	size_t	i;

	case_array = malloc(sizeof(char) * (len_word + 1));
	if (!case_array)
		return (NULL);
	i = 0;
	while (len_word--)
	{
		case_array[i] = start_word[i];
		i++;
	}
	case_array[i] = '\0';
	return (case_array);
}

static char	**put_words_Tab(char **tab, char *str, char separator,
							size_t size_word)
{
	char			*start_array;
	size_t			i;

	i = 0;
	while (size_word--)
	{
		while (*str == separator)
			str++;
		start_array = (char *)str;
		while (*str && *str != separator)
			str++;
		tab[i] = put_characters_Array(start_array, str - start_array);
		if (!tab[i])
			return (malloc_error(tab));
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

static size_t	count_words(char *str, char character)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str == character)
			str++;
		if (!*str)
			break ;
		while (*str && *str != character)
			str++;
		count++;
	}
	return (count);
}

char	**ft_split(char const *str, char separator)
{
	char			**tab;
	size_t			size_word;

	if (!str)
		return (NULL);
	size_word = count_words((char *)str, separator);
	tab = malloc(sizeof(char *) * (size_word + 1));
	if (!tab)
		return (NULL);
	return (put_words_Tab(tab, (char *)str, separator, size_word));
}
