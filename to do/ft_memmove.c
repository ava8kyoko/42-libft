/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:18:27 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/06 00:36:07 by kyoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memmove()
** 		Copier une zone mémoire
** 		i.e. copie n octets depuis la zone mémoire src vers la zone
** 			mémoire dest. Les deux zones peuvent se chevaucher :
** 			la copie se passe comme si les octets de src étaient
** 			d'abord copiés dans une zone temporaire qui ne chevauche
** 			ni src ni dest, et les octets sont ensuite copiés de
** 			la zone temporaire vers dest.
** VALEUR RENVOYÉE
** 		Renvoie un pointeur sur dest.
** CONFORMITÉ
** 		SVr4, BSD 4.3, C89, C99, POSIX.1-2001.
*/

#include "libft.h"
/*
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (dst);
}
*/