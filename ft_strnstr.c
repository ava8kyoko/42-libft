/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:19:26 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/04 12:03:22 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strnstr()
	Find the first substring in a length-limited string
PARAMÈTRES
	s1  The string to be searched
	s2  The string to search for
	len : the maximum number of characters to search

    The strnstr() function locates the	first occurrence of the
	null-terminated string little in the string big, where not
	more than len characters are searched.  Characters that appear
	after a '\0' character are not searched. Since the strnstr()
	function is	a FreeBSD specific API,	it should only be used when
	portability is not a concern.

RETURN VALUES
    If s2 (needle) is an empty string, s1 (haystack) is returned; if
	s2 (needle) occurs nowhere in s1 (haystack), NULL is returned; otherwise
	a pointer to the first character of the first occurrence of
	s2 (needle) is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *inside, const char *tofind, size_t len_tosearch)
{
	char	*found;
	size_t	ptr;
	size_t	i;
	size_t	len_tofind;

	found = (char *)inside;
	ptr = 0;
	len_tofind = ft_strlen(tofind);
	if (!*tofind || inside == tofind)
		return (found);
	while (found[ptr] != '\0' && len_tosearch > 0 && ptr < len_tosearch)
	{
		i = 0;
		while (found[ptr + i] != '\0' && tofind[i] != '\0'
			&& found[ptr + i] == tofind[i] && ptr + i < len_tosearch)
			i++;
		if (i == len_tofind)
			return (found + ptr);
		ptr++;
	}
	return (NULL);
}
