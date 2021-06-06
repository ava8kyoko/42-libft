/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:08:05 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/06 00:36:15 by kyoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memcpy()
** 		Copier une zone mémoire
** 		i.e. copie n octets depuis la zone mémoire src vers la zone mémoire
** 			dest. Les deux zones ne doivent pas se chevaucher. Si c'est
** 			le cas, utilisez plutôt memmove(3).
** VALEUR RENVOYÉE
** 		Renvoie un pointeur sur dest.
** CONFORMITÉ
** 		Vr4, BSD 4.3, C89, C99, POSIX.1-2001.
*/

#include "libft.h"
/*
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dst)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char*)(dst + i) = *(char*)(src + i);
		i++;
	}
	return (dst);
}
*/
