/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:20:27 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/17 15:25:31 by mchampag         ###   ########.fr       */
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

char			**malloc_error(char **tab)
{
	size_t		i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	*put_characters_inArray(char *beginning_word, size_t len_word)
{
	char	*case_array;
	size_t		i;

	case_array = malloc(sizeof(char) * (len_word + 1));
	if (!case_array)
		return (NULL);
	i = 0;
	while (len_word--)
	{
		case_array[i] = beginning_word[i];
		i++;
	}
	case_array[i] = 0;
	return (case_array);
}

char	**put_words_inTab(char **tab, char *str, char separator, size_t size_word)
{
	char			*array_beginning;
	size_t			i;

	i = 0;
	while (size_word--)
	{
		while (*str == separator)
			str++;
		array_beginning = (char *)str;
		while (*str != separator)
			str++;
		if (!(tab[i] = put_characters_inArray(array_beginning, str - array_beginning)))
			return (malloc_error(tab));
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

size_t		count_words(char *s, char c)
{
	size_t count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break;
		while (*s != c)
			s++;
		count++;
	}
	return (count);
}

char					**ft_split(char const *str, char separator)
{
	char			**tab;
	size_t			size_word;

	if (!str)
		return (NULL);
	size_word = count_words((char *)str, separator);
	if (!(tab = malloc(sizeof(char *) * (size_word + 1))))
		return (NULL);
	return (put_words_inTab(tab, (char *)str, separator, size_word));
}


/*
int		main(void)
{
	int i = 0;
	char **tab;

	tab = ft_split("", '|');
	//while (i < 4)
	//{
		printf("tab %d: %s\n", i, tab[i]);
		//i++;
	//}

	return (0);
}
*/
