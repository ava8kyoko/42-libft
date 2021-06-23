/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 13:10:24 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/23 13:56:16 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMÈTRES
** 	#1. La chaine de caractères préfixe.
** 	#2. La chaine de caractères suffixe.
** VALEUR DE RETOUR
** 	La nouvelle chaine de caractères. NULL si l’allocation échoue.
** FONCTIONS EXTERNES AUTORISÉES
** 	malloc
** DESCRIPTION
** 	Alloue (avec malloc(3)) et retourne une nouvelle chaine, résultat
** 	de la concaténation de s1 et s2.
*/

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*memory_space;
	size_t	len;

	if (!str1 || !str2)
		return (NULL);
	len = ft_strlen(str1) + ft_strlen(str2 + 1);
	memory_space = malloc(len);
	if (!memory_space)
		return (NULL);
	ft_strlcpy(memory_space, str1, len);
	ft_strlcat(memory_space, str2, len);
	return (memory_space);
}
