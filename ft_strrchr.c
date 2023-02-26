/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:44:48 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/14 12:27:26 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strrchr()
** 	Rechercher un caractère dans une chaîne
** 	i.e. renvoie un pointeur sur la dernière occurrence du caractère c
** 		dans la chaîne s.
** 		Pour ces fonctions, « caractère » signifie « octet » ;
** 		elles ne marchent pas avec des caractères larges ou multi-octets.
** VALEUR RENVOYÉE
** 	Un pointeur sur le caractère correspondant, ou NULL si le caractère
** 		n'a pas été trouvé.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int character)
{
	size_t	len;

	len = ft_strlen(str) + 1;
	while (len--)
	{
		if (*(len + str) == (char)character)
			return ((char *)(len + str));
	}
	return (NULL);
}
