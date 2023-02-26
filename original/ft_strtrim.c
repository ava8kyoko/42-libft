/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 16:10:48 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/23 10:27:37 by mchampag         ###   ########.fr       */
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
	char		*new_str;
	size_t		len;

	if (!str || !characters_totrim)
		return (NULL);
	while (*str && ft_strchr(characters_totrim, *str))
		str++;
	len = ft_strlen(str);
	while (len && ft_strrchr(characters_totrim, str[len]))
		len--;
	new_str = ft_substr(str, 0, ++len);
	return (new_str);
}
