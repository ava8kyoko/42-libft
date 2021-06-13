/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 16:10:48 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/12 22:07:51 by kyoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMÈTRES
** 	#1. La chaine de caractères à trimmer.
** 	#2. Le set de reference de caractères à trimmer.
**
** VALEUR DE RETOUR
** 	La chaine de caractères trimmée. NULL si l’allocation échoue.
**
** FONCTIONS EXTERNES AUTORISÉES
** 	malloc
**
** DESCRIPTION
** 	Alloue (avec malloc(3)) et retourne une copie de la chaine ’s1’,
** 	sans les caractères spécifiés dans ’set’ au début et à la fin
** 	de la chaine de caractères.
*/

#include "libft.h"

char	*ft_strtrim(char const *str, char const *characters_totrim)

{
	size_t		len;
	char		*new_str;

	if (!str || !characters_totrim)
		return (NULL);
	while (*str && ft_strchr(characters_totrim, *str))
		str++;
	len = ft_strlen(str);
	while (len && ft_strchr(characters_totrim, str[len]))
		len--;
	new_str = ft_substr((char*)str, 0, len + 1);
	return (new_str);
}


/*
{
	char *memory_space;
	size_t	len_str;
	
	if (!str || !characters_totrim)
		return (NULL);
	len_str = ft_strlen(str);
	memory_space = malloc(sizeof(char) * len_str + 1);

	*memory_space = ft_strnstr(str, characters_totrim, len_str);
	return (memory_space);
}
*/