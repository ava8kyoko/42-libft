/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:58:20 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/11 15:57:49 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** bzero()
** 		Écrire des octets de valeur zéro dans un bloc d'octets.
** 		i.e. met à 0 (octets contenant « \0 ») les n premiers octets du bloc
** 			pointé par s.
** VALEUR RENVOYÉE
** 		Aucune
*/

#include "libft.h"

void	ft_bzero(void *str, size_t len_tofill)
{
	unsigned char	*new_str;

	new_str = str;
	while (len_tofill--)
		*new_str++ = 0;
}
