/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:11:35 by mchampag          #+#    #+#             */
/*   Updated: 2021/05/27 16:12:10 by kyoko            ###   ########.fr       */
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
** Return the total length of the string it tried to create, that means
** the initial length of dst plus the length of src.
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
alexandre.berube@servicesquebec.gouv.qc.ca
*/

/*

The strlcat() function appends at most (dstsize-strlen(dst)-1) characters
of src to dst (dstsize being the size of the string buffer dst). If the
string pointed to by dst contains a null-terminated string that fits into
dstsize bytes when strlcat() is called, the string pointed to by dst will
be a null-terminated string that fits in dstsize bytes (including the
terminating null character) when it completes, and the initial character
of src will override the null character at the end of dst. If the string
ointed to by dst is longer than dstsize bytes when strlcat() is called,
the string pointed to by dst will not be changed. The function returns
min{dstsize,strlen(dst)}+ strlen(src). Buffer overflow can be checked as
follows:

if (strlcat(dst, src, dstsize) >= dstsize)
        return −1;
*/

//dstsize - strlen(dst) - 1

#include "libft.h"

/*
size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
     char       *d = dest;
     const char *s = src;
     size_t      n = destsize;
     size_t      dlen;
	printf("%s\n", d);

     while (n-- != 0 && *d != '\0')
	 {
		 d++;
		 printf("%s\n", d);
	 }

     dlen = d - dest;
	 printf("dlen: %zu\n", dlen);
     n = destsize - dlen;
	 printf("n: %zu\n", n);

     if (n == 0)
         return (dlen + strlen(s));
	printf("s: %s\n", s);
     while (*s != '\0')
     {
		 printf("d: %s\n", d);
         if (n != 1)
         {

             *d++ = *s;
			 printf("d: %s\n", d);
             n--;
			 printf("n: %zu\n", n);
         }
         s++;
		 printf("s: %s\n", s);
     }
     *d = '\0';

     return (dlen + (s - src)); 
 }
*/

size_t ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	char	*new_dst;
	size_t	dst_end;
	size_t	dst_len;
	size_t	src_len;
	
	new_dst = dst;
	dst_len = ft_strlen(dst);
	print
	dst_end = dst_len;
	src_len = ft_strlen(src);
	/*while (*src != '\0')
	{
		new_dst[dst_end] = *src;
		printf("%s", dst);
		dst_end++;
		src++;
		if (dst_end == dst_size - 1)
			break;
	}*/
	new_dst[dst_end] = '\0';
	return (dst_len + src_len);
}

int		main(void)
{
	printf("%zu\n\n", ft_strlcat("abc", "def", 0));
	printf("%zu\n\n", ft_strlcat("abc", "def", 1));
	printf("%zu\n\n", ft_strlcat("abc", "def", 2));
	printf("%zu\n\n", ft_strlcat("abc", "def", 3));
	printf("%zu\n\n", ft_strlcat("abc", "def", 4));

	return (0);
}
