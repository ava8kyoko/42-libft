/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:58:17 by mchampag          #+#    #+#             */
/*   Updated: 2021/05/14 00:53:10 by kyoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** À VÉRIFIER !!!
** strlcpy()
** 	Copy a NUL terminated string into a sized buffer
**
** Description
** The strlcpy() and strlcat() functions copy and concatenate strings respectively.
** They are designed to be safer, more consistent, and less error prone replacements
** for strncpy(3) and strncat(3). Unlike those functions, strlcpy() and strlcat() take
** the full size of the buffer (not just the length) and guarantee to NUL-terminate the
** result (as long as size is larger than 0 or, in the case of strlcat(), as long as there
** is at least one byte free in dst). Note that a byte for the NUL should be included in size.
** Also note that strlcpy() and strlcat() only operate on true ''C'' strings. This means that for
** strlcpy() src must be NUL-terminated and for strlcat() both src and dst must be NUL-terminated.
**
** The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst,
** NUL-terminating the result.
**
** Return Values
** The strlcpy() and strlcat() functions return the total length of the string they tried to create. For strlcpy() that means the length of src. For strlcat() that means the initial length of dst plus the length of src. While this may seem somewhat confusing, it was done to make truncation detection simple.
**
** Note, however, that if strlcat() traverses size characters without finding a NUL, the length of the string is considered to be size and the destination string will not be NUL-terminated (since there was no space for the NUL). This keeps strlcat() from running off the end of a string. In practice this should not happen (as it means that either size is incorrect or that dst is not a proper ''C'' string). The check exists to prevent potential security problems in incorrect code.
**
** ARGUMENTS
** 	dest: Where to copy the string to
** 	src: Where to copy the string from
** 	size: size of destination buffer
** BSD
** 	the result is always a valid NUL-terminated string that fits in
** 		the buffer (unless, of course, the buffer size is zero).
** 		It does not pad out the result like strncpy does.
*/

/*
** Doit copier le plus de caractères possible de la source dans
** la destination. dstsize = longueur maximale de la destination.
** Contrairement à strncpy, elle doit garantir que le terminateur soit toujours
** écrit dans la destination, autrement dit, si la source est trop longue,
** il sera en position dest[dstsize - 1], sinon la destination sera une simple copie
** de la source. Retourne la longueur de la source.
** https://forums.commentcamarche.net/forum/affich-34997365-ecrire-fonction-strlcpy
*/

#include "libft.h"


size_t		ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t srcsize;

	srcsize = ft_strlen(src);
	if (srcsize < dstsize)
	{
		ft_strncpy(dest, src, srcsize);
	}
	else if (dstsize != 0)
	{
		ft_strncpy(dest, src, dstsize - 1);
		dest[dstsize - 1] = '\0';
	}
	return (srcsize);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (size > 0)
	{
		while (--size && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}




