/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:39:13 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/23 13:11:09 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strchr(), strrchr(), strchrnul()
** 	Rechercher un caractère dans une chaîne
** strchr()
**	envoie un pointeur sur la première occurrence du caractère
** 	c dans la chaîne s.
**	Pour ces fonctions, « caractère » signifie « octet » ;
**	elles ne marchent pas avec des caractères larges ou multi-octets.
** VALEUR RENVOYÉE
** 	Un pointeur sur le caractère correspondant, ou NULL si le caractère
** 		n'a pas été trouvé.
** http://manpagesfr.free.fr/man/man3/strchr.3.html
*/

#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	while (*str)
	{
		if (*str == (char)character)
			return ((char *)str);
		str++;
	}
	if (character == '\0')
		return ((char *) str);
	return (NULL);
}
