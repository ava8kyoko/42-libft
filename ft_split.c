/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:08:03 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/14 14:41:09 by mchampag         ###   ########.fr       */
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
/*
static char			**ft_malloc_error(char **tab)
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

static size_t	ft_get_nb_strs(char const *str, char character)
{
	size_t	i;
	size_t	nb_strs;

	if (!str[0])
		return (0);
	i = 0;
	nb_strs = 0;
	while (str[i] && str[i] == character)
		i++;
	while (str[i])
	{
		if (str[i] == character)
		{
			nb_strs++;
			while (str[i] && str[i] == character)
				i++;
			continue ;
		}
		i++;
	}
	if (str[i - 1] != character)
		nb_strs++;
	return (nb_strs);
}

static void			ft_get_next_str(char **next_str, size_t *next_str_len,
					char c)
{
	size_t i;

	*next_str += *next_str_len;
	*next_str_len = 0;
	i = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c)
			return ;
		(*next_str_len)++;
		i++;
	}
}

char				**ft_split(char const *str, char character)
{
	char			**tab;
	char			*next_str;
	size_t	next_str_len;
	size_t	nb_strs;
	size_t	i;

	if (!str)
		return (NULL);
	nb_strs = ft_get_nb_strs(str, character);
	if (!(tab = (char **)malloc(sizeof(char *) * (nb_strs + 1))))
		return (NULL);
	i = 0;
	next_str = (char *)str;
	next_str_len = 0;
	while (i < nb_strs)
	{
		ft_get_next_str(&next_str, &next_str_len, character);
		if (!(tab[i] = (char *)malloc(sizeof(char) * (next_str_len + 1))))
			return (ft_malloc_error(tab));
		ft_strlcpy(tab[i], next_str, next_str_len + 1);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
*/

char	**ft_split(char const *str, char character)
{
	char	**tab;
	//char	*new_str;
	unsigned int	start;
	unsigned int	end;
	unsigned int	len;
	unsigned int	tab_line;

	if (!str || !character)
		return (NULL);
	i = 0;
	k = 0;
	line = 0;

	while(str[start + end] && ft_strchr(str[end], character))
		end++;
	//ft_strlcpy(new_str, str[start], end - start);
	//start = end + 1;
	//new_str[] = '\0';
	len = end - start;
	tab[line] = ft_substr(str, start, len);

	return((char **)tab);
}

int		main(void)
{
	int i = 0;
	char **tab;

	tab = ft_split("Salut super chaton!", ' ');
	while (i < 3)
	{
		printf("tab %d: %s\n", i, tab[i]);
		i++;
	}

	return (0);
}
