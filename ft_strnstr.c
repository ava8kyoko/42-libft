/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:19:26 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/23 12:26:36 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strnstr() Find the first substring in a length-limited string
** 	The strnstr() function locates the	first occurrence of the
** 	null-terminated string little in the string big, where not
** 	more than len characters are searched.  Characters that appear
** 	after a '\0' character are not searched. Since the strnstr()
** 	function is	a FreeBSD specific API,	it should only be used when
** 	portability is not a concern.
**
** PARAMÈTRES
** 	s1 : Chaine dans laquelle chercher
** 	s2 : Chaine à chercher
** 	len : Nombre maximum de charactères à chercher
**
** RETURN VALUES
**  If s2 (needle) is an empty string, s1 (haystack) is returned; if
** 	s2 (needle) occurs nowhere in s1 (haystack), NULL is returned; otherwise
** 	a pointer to the first character of the first occurrence of
** 	s2 (needle) is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *inside, const char *tofind,
			size_t len_tosearch)
{
	size_t	start;
	size_t	i;

	start = 0;
	if (*tofind == 0)
		return ((char *) inside);
	while (inside[start] != '\0' && start < len_tosearch)
	{
		i = 0;
		while (inside[start + i] == tofind[i] && start + i < len_tosearch)
		{
			if (tofind[i + 1] == 0)
				return ((char *)&inside[start]);
			i++;
		}
		start++;
	}
	return (NULL);
}
