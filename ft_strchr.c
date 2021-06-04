/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:39:13 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/04 10:32:59 by mchampag         ###   ########.fr       */
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


char    *ft_strchr(const char *s, int c)
{
    while (*s && *s != c)
        s++;
	printf("%s\n", s);
	printf("%s\n", s);
    if (*s == c)
        return ((char *)s);
	return (NULL);
}


int    main(void)
{
    printf("%s\n", ft_strchr("patate", 'p'));
    printf("%s\n", ft_strchr("patate", 't'));
    printf("%s\n", ft_strchr("patate", 'h'));
    return (0);
}

/*
char	*ft_strchr(const char *s, int c)
{
	char	*new_s;

	new_s = (char *)s;
	while (*new_s != '\0' && *new_s != (char) c)
		new_s++;
    if (*new_s == (char) c)
        return (char *)new_s;
	else
    	return (NULL);
}
*/






	/*
	char	*new_s;
	int		i;

	new_s = (char *)s;
	i = 0;
	printf("%s\n", s);
	while (new_s[i] != c && new_s[i] != '\0')
	{
		if (new_s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	if (new_s[i] == '\0')
		return (NULL);
		*/
/*
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}


char	*ft_strchr(const char *s, int c)
{
	char	*new_s;

	new_s = (char *)s;
	while (*new_s != '\0' && *new_s != (char) c)
		*new_s++;
    if (*new_s == (char) c)
        return (char *)new_s;
	else
    	return ("NULL");
}
*/
