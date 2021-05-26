/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:19:26 by mchampag          #+#    #+#             */
/*   Updated: 2021/05/25 17:43:47 by kyoko            ###   ########.fr       */
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
char *ft_strnstr(const char *inside, const char *tofind, size_t len)
{
	size_t	i;
	size_t	k;
	size_t	len_tofind;
	char	*new_inside;

	i = 0;
	k = 0;
	new_inside = (char *) inside;
	len_tofind = ft_strlen(tofind);
	if (len_tofind > len)
		return (NULL);
	if (!*tofind || inside == tofind)
		return (new_inside);
	while (new_inside[i] != '\0' && i < len)
	{
		while (new_inside[i + k] != '\0' && tofind[k] != '\0'
				&& new_inside[i + k] == tofind[k] && i + k < len)
			k++;
		if (k == len_tofind)
			return (new_inside + i);
		i++;
	}
	return (NULL);
}
*/

char *ft_strnstr(const char *inside, const char *tofind, size_t len)
{
	char	*new_inside;
	char	*str_chr;
	char	new_str_chr;
	int		str_cmp;
	int		c_tofind;
	size_t	len_tofind;
		
	new_inside = (char *)inside;
	len_tofind = ft_strlen(tofind);
	printf("len: %ld\n", len_tofind);
	c_tofind = tofind[0];
	str_chr = ft_strchr(inside, c_tofind);
	str_cmp = ft_strncmp(str_chr, tofind, len_tofind);
	
	
	if (len_tofind > len)
		return (NULL);
	if (!*tofind)
		return (new_inside);
	printf("%s\n", str_chr);
	while (str_chr != NULL)
	{
		printf("cmp: %d\n", str_cmp);
		if (str_cmp == 0)
			return (str_chr);
		//if (str_cmp > 0)
		else
		{
			str_chr++;
			str_chr = ft_strchr(str_chr, c_tofind);
			str_cmp = ft_strncmp(str_chr, tofind, len_tofind);
		}
		printf("%s+\n", str_chr);
	}
	return (NULL);
}


int	main(void)
{
	printf("%s\n\n", ft_strnstr("ABCD", "ABCD", 2));
	printf("%s\n\n", ft_strnstr("ABCD", "CD", 5));
	printf("%s\n\n", ft_strnstr("ABCD", "BC", 5));
	printf("%s\n\n", ft_strnstr("ACCD", "CD", 5));
	printf("%s\n\n", ft_strnstr("ABCD", "EF", 5));
	//printf("%s\n\n", ft_strnstr("ABCD", "CD", 3));
	//printf("%s\n\n", ft_strnstr("ABCD", "CD", 2));
	//printf("%s\n\n", ft_strnstr("AB", "ABCD", 5));
	//printf("%s\n\n", ft_strnstr("AB", "ABCD", 2));
	//printf("%s\n\n", ft_strnstr("fleur", "fleur", 6));
	//printf("%s\n\n", ft_strnstr("star", "star", 2));
	//printf("%s\n\n", ft_strnstr("chat", "", 6));
	//printf("%s\n\n", ft_strnstr("", "ABCD", 5));

	return (0);
}