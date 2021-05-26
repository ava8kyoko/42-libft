/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:11:35 by mchampag          #+#    #+#             */
/*   Updated: 2021/05/24 14:47:49 by kyoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Un tableau de char ou 'chaîne de caractères' est une suite de 'caractères'
** suivi du caractère '\0' qui est  la fin de la chaîne.
** La fonction strlen() retournera le nombre de caractères avant le '\0'.
** Le tableau dst peut ne rien contenir au départ mais on lui a donné une
** dimension.
** Par exemple: char dst[100];
** Si tu fais la concaténation de trop de chaînes, tu vas déborder
** la dimension de dst.
** Les tableaux ne sont pas 'élastiques' en C ...
** sizeof(dst) est la limite que la fonction acceptera.
** .........
** L'utilisation de strlcat, et similaire à strcat : c'est de recoller 
** 2 chaines de caractères en 1, mais cette fois-ci qui contiendra 
** AU MAXIMUM taille caractères (il faut donc être certain de pouvoir 
** écrire autant de données à l'endroit de s1).
** https://openclassrooms.com/forum/sujet/une-explication-precise-de-strlcat
** The strlcpy() and strlcat() functions copy and concatenate strings
** respectively. They are designed to be safer, more consistent, and
** less error prone replacements for strncpy(3) and strncat(3). Unlike
** those functions, strlcpy() and strlcat() take the full size of the
** buffer (not just the length) and guarantee to NUL-terminate the result
** (as long as size is larger than 0 or, in the case of strlcat(), as long
** as there is at least one byte free in dst). Note that a byte for the NUL
** should be included in size. Also note that strlcpy() and strlcat() only
** operate on true ''C'' strings. This means that for strlcpy() src must be
** NUL-terminated and for strlcat() both src and dst must be NUL-terminated.
** 
** The strlcpy() function copies up to size - 1 characters from the
** NUL-terminated string src to dst, NUL-terminating the result.
** 
** The strlcat() function appends the NUL-terminated string src to
** the end of dst. It will append at most size - strlen(dst) - 1 bytes,
** NUL-terminating the result.
** 
** Return Values
** The strlcpy() and strlcat() functions return the total length of the
** string they tried to create. For strlcpy() that means the length of src.
** For strlcat() that means the initial length of dst plus the length of src.
** While this may seem somewhat confusing, it was done to make truncation
** detection simple.
** 
** Note, however, that if strlcat() traverses size characters without
** finding a NUL, the length of the string is considered to be size and
** the destination string will not be NUL-terminated (since there was no
** space for the NUL). This keeps strlcat() from running off the end
** of a string. In practice this should not happen (as it means that
** either size is incorrect or that dst is not a proper ''C'' string).
** The check exists to prevent potential security problems in incorrect
** code.
** https://linux.die.net/man/3/strlcat
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	if (destsize < i)
	{
		while (src[j])
			j++;
		return (destsize + j);
	}
	while (destsize > 0 && i < destsize - 1 && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	while (src[j++])
		i++;
	return (i);
}

int		main(void)
{
/*
** 	soit tableau de destination non initialisé:
*/
/*
** 	char dst[5];
*/
 
/*
** 	avec strlcpy et strlcat, on peut balancer tout ce
** 	qu'on veut dans le tableau, on sait qu'on de
** 	déborde pas. C'est ça qui est bien.
*/
/*
** 	ft_strlcpy(dst, "abc", sizeof dst);
** 	ft_strlcat(dst, "defghijklmnopq", sizeof dst);
** 	ft_strlcpy(dst, "defghijklmnopq", sizeof dst);
** 	ft_strlcat(dst, "defghijk", sizeof dst);
** 	ft_strlcpy(dst, "", sizeof dst);
** 	ft_strlcat(dst, "", sizeof dst);
** 	ft_strlcat(dst, "abcd", sizeof dst);
*/
	
	//printf("%\n\n", ft_strlcat(, src, destsize))
	
	return (0);
}

/*
char buffer[32];
char s1[] = "0123456789";
char s2[] = "abcdef";
 
strcpy(buffer, s1);
strlcat(buffer, s2, 10);
printf(buffer); // devrait afficher '0123456789'
 
strcpy(buffer, s1);
strlcat(buffer, s2, 13);
printf(buffer); // devrait afficher '0123456789abc'
 
strcpy(buffer, s1);
strlcat(buffer, s2, 16);
printf(buffer); // devrait afficher '0123456789abcdef'
 
strcpy(buffer, s2);
strlcat(buffer, s1, 10);
printf(buffer); // devrait afficher 'abcdef0123'
 
strcpy(buffer, s2);
strlcat(buffer, s1, 14);
printf(buffer); // devrait afficher 'abcdef01234567'
*/