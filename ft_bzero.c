/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:58:20 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/06 22:51:57 by kyoko            ###   ########.fr       */
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

/*
	size_t	i;

	i = 0;
	while (i < len_tofill)
	{
		((char *)str)[i] = 0;
		i++;
	}
	
	unsigned char	*dest;
	size_t			i;

	dest = str;
	i = 0;
	while (i++ < len_tofill)
		*dest++ = 0;
*/