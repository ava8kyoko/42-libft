/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:58:17 by mchampag          #+#    #+#             */
/*   Updated: 2021/05/15 22:44:58 by kyoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strlcpy(), strlcat()
	size-bounded string copying and concatenation
Description
	The strlcpy() and strlcat() functions copy and concatenate strings 
	respectively. They are designed to be safer, more consistent, and 
	less error prone replacements for strncpy(3) and strncat(3). Unlike 
	those functions, strlcpy() and strlcat() take the full size of the 
	buffer (not just the length) and guarantee to NUL-terminate the 
	result (as long as size is larger than 0 or, in the case of strlcat(), 
	as long as there is at least one byte free in dst). Note that a byte 
	for the NUL should be included in size. Also note that strlcpy() and 
	strlcat() only operate on true ''C'' strings. This means that for 
	strlcpy() src must be NUL-terminated and for strlcat() both src and 
	dst must be NUL-terminated.

strlcpy() 
	Copies up to size - 1 characters from the NUL-terminated string src
	to dst, NUL-terminating the result.

Return Values
	The strlcpy() and strlcat() functions return the total length of 
	the string they tried to create. For strlcpy() that means the length 
	of src.
https://linux.die.net/man/3/strlcpy
*/

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if (!src || !dst)
		return (0);
	while (i < (size - 1))
	{
		if (src[i] != '\0')
			dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

int main(void) 
{ 
	char dst1_ft_strlcpy[100] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
	const char src1_ft_strlcpy[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"; 
	size_t size1 = 10; 
	
	ft_strlcpy(dst1_ft_strlcpy[100], src1_ft_strlcpy[100], size1);
	printf("%s\n", src1_ft_strlcpy); 
	printf("\n"); 

	return (0);
}
