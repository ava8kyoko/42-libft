/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:48:28 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/04 10:27:21 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memset()
** Remplit les n premiers octets de la zone mémoire pointée par s
** 		avec l'octet c.
** VALEUR RENVOYÉE
** 		Renvoie un pointeur sur la zone mémoire s.
*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len_tofill)
{
	char	*new_str;

	new_str = str;
	while (len_tofill)
	{
		*new_str = (unsigned char) c;
		new_str++;
		len_tofill--;
	}
	return (str);
}
