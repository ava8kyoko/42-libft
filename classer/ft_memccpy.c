/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:12:20 by mchampag          #+#    #+#             */
/*   Updated: 2021/05/10 11:46:11 by mchampag         ###   ########.fr       */
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
** PROBLÈMES
** 		Aucun
*/

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{

}
