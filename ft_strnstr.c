/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:19:26 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/01 11:47:08 by mchampag         ###   ########.fr       */
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
/*
char	*ft_strnstr(const char *inside, const char *tofind, size_t len_tosearch)
{
	char	*found;
	size_t	i;
	size_t	k;
	size_t	x;

	found = inside;
	i = 0;
	k = 0;
	if (!*tofind)
		return ((char *)inside);
	if (*inside && len_tosearch > 0)
	{
		//while (inside[i] != 0 && inside[i] != tofind[0])
			//i++
		//x = i;
		if (ft_strchr(found) != NULL)
			found = ft_strchr(inside);
		while (found[i] == tofind[k] && k <= len_tosearch)
		{
			i++;
			k++;
		}
		if (ft_strlen(found) == len_tosearch)
			//return ((char *)inside[x]);
			//return(ft_strchr(inside))
	}
	return (NULL);
}

*/
/*
{
	size_t	i;
	size_t	k;
	char	new_s1[] = "x";
	//char	*new_s1;

	i = 0;
	k = 0;
	//new_s1 = "x";
	printf("i : %ld\n", i);
	printf("k : %ld\n", i);
	if (!*tofind || inside == tofind)
		return ((char *)inside);
	if (!*s1 || len != 0)
	{
		while (s1[i] != '\0' && s1[i] != s2[0])
		{
			i++;
			printf("i : %ld\n", i);
		}
		while (s1[i] == s2[k])
		{
			new_s1[k] = s1[i];
			printf("%s\n", new_s1);
			if (ft_strlen(new_s1) == ft_strlen(s2) ||
					(ft_strlen(s2) > len && ft_strlen(new_s1) == len))
				return ((char *)(s1));
			i++;
			printf("i : %ld\n", i);
			k++;
			printf("K : %ld\n", k);
		}
	}
	return (NULL);
}
*/

