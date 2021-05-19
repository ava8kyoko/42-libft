/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:19:26 by mchampag          #+#    #+#             */
/*   Updated: 2021/05/18 17:54:04 by kyoko            ###   ########.fr       */
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

/*
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	n;
	size_t			len_little;

	if (*little == '\0')
		return (char*)(big);
	n = 0;
	len_little = ft_strlen(little);
	while (*big != '\0')
	{
		if (n + len_little > len)
			return (NULL);
		if (ft_strncmp(big, little, len_little) == 0)
			return (char*)(big);
		big++;
		n++;
	}
	return (NULL);
}
*/




char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	len_s2;
	int		diff_s1_s2;

	len_s2 = ft_strlen(s2);
	diff_s1_s2 = ft_strncmp(s1, s2, len_s2);
	if (len_s2 == 0)
		return ((char *)s1);
	while (*s1 != '\0' || len_s2 < len)
	{
		s1++;
		len_s2++;
	}
	return (NULL);
}


int	main(void)
{
	printf("%s\n", ft_strnstr("abcd", "1234", 8));

	return (0);
}


/*
{
	while(*s )
	{
		if (s2 == '\0')
			return (s1);
	}
	return (ft_strchr(*s1, (int)s2[1]));

	return (NULL);
}


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
*/