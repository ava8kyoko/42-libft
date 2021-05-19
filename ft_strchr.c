/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:39:13 by mchampag          #+#    #+#             */
/*   Updated: 2021/05/18 10:03:52 by kyoko            ###   ########.fr       */
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
** CONFORMITÉ
** 	SVr4, BSD 4.3, C89 et C99.
** http://manpagesfr.free.fr/man/man3/strchr.3.html
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
