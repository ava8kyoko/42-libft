/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:11:35 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/23 10:23:58 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
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

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	end;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	end = dst_len;
	i = 0;
	if (dst_size < dst_len)
		return (dst_size + src_len);
	while (dst_size > 0 && end < dst_size - 1 && src[i])
		dst[end++] = src[i++];
	dst[end] = '\0';
	return (dst_len + src_len);
}
