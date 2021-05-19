/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:19:26 by mchampag          #+#    #+#             */
/*   Updated: 2021/05/19 15:40:24 by kyoko            ###   ########.fr       */
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
    If s2 (little) is an empty string, s1 (big) is returned; if 
	s2 (little) occurs nowhere in s1 (big), NULL is returned; otherwise 
	a pointer to the first character of the first occurrence of 
	s2 (little) is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	k;
	char	*new_s1;

	i = 0;
	k = 0;
	new_s1 = "x";
	if (!*s2)
		return ((char *)s1);
	if (!*s1 || len != 0)
	{
		while (s1[i] != '\0' && s1[i] != s2[0])
			i++;
		while (s1[i] == s2[k])
		{
			new_s1[k] = s1[i];
			if (ft_strlen(new_s1) == ft_strlen(s2)
				|| (ft_strlen(s2) > len && ft_strlen(new_s1) == len))
				return ((char *)(s1));
			i++;
			k++;
		}
	}		
	return (NULL);
}
