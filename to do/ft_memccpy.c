/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:12:20 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/06 00:36:24 by kyoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memccpy()
** 		Copie de zone mémoire
** 		i.e. copie au plus n octets de la zone mémoire src vers la zone
** 			mémoire dest, s'arrêtant dès qu'elle rencontre le caractère c.
** VALEUR RENVOYÉE
** 		Renvoie un pointeur sur le caractère immédiatement après c dans
** 			la zone dest, ou NULL si c n'a pas été trouvé dans les n
** 			premiers caractères de src.
** CONFORMITÉ
** 		SVr4, BSD 4.3, C99
*/

#include "libft.h"
/*
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;
	size_t			i;

	i = 0;
	t1 = (unsigned char *)dest;
	t2 = (unsigned char *)src;
	while (i < n)
	{
		t1[i] = t2[i];
		if (t1[i] == (unsigned char)c)
			return ((void*)(dest + i++));
		++i;
	}
	return (NULL);
}

{
	unsigned char	*ptr;
	unsigned char	*ptr2;
	unsigned char	cs;
	int				i;

	ptr = (unsigned char*)dest;
	ptr2 = (unsigned char*)src;
	cs = (unsigned char)c;
	i = 0;
	while (n-- > 0)
	{
		*(ptr + i) = *(ptr2 + i);
		if (*(ptr2 + i) == cs)
			return (dest + i++);
		i++;
	}
	return (0);
}
*/