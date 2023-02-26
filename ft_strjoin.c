/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 13:10:24 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/25 14:32:52 by mchampag         ###   ########.fr       */
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
	size_t	len_str1;
	size_t	len_str2;

	if (!str1 || !str2)
		return (NULL);
	len_str1 = ft_strlen(str1);
	len_str2 = ft_strlen(str2);
	memory_space = malloc(sizeof(char) * (len_str1 + len_str2 + 1));
	if (!memory_space)
		return (NULL);
	ft_memcpy(memory_space, str1, len_str1);
	ft_memcpy((memory_space + len_str1), str2, (len_str2 + 1));
	return (memory_space);
}
