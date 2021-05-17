/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:18:27 by mchampag          #+#    #+#             */
/*   Updated: 2021/05/12 11:19:01 by mchampag         ###   ########.fr       */
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

void	*ft_memmove(void *dest, const void *src, size_t n)
{

}
