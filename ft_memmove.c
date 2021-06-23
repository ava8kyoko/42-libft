/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:18:27 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/23 10:40:38 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memmove()
**	Cette fonction permet de copier un bloc de mémoire spécifié par le
**	paramètre source dans un nouvel emplacement désigné par le paramètre
**	destination. On peut donc dire que cette fonction est proche de la
**	fonction memcpy. Néanmoins, la différence réside dans le fait que
**	la fonction memmove accepte que les deux zones de mémoire puissent
**	se chevaucher.
**
**	En cas de chevauchement, la copie se passe comme si les octets de la
**	zone source étaient d'abord copiés dans une zone temporaire, qui ne
**	chevauche aucune des deux zones pointées par source et destination,
**	et les octets sont ensuite copiés de la zone temporaire vers la zone
**	de destination.
**
** PARAMÈTRES
**	destination : permet de spécifier l'adresse du bloc mémoire devant
**					recevoir les données à copier.
**	source : permet de définir l'adresse du bloc de mémoire à dupliquer.
**	size : indique le nombre d'octets à dupliquer.
**
** VALEUR RENVOYÉE
** 	La fonction renvoie l'adresse du bloc de mémoire (pointeur sur) de
**	destination.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size_tocopy)
{
	char	*new_dest;
	char	*new_src;

	new_dest = (char *)dest;
	new_src = (char *)src;
	if (!new_dest && !new_src)
		return (0);
	while (size_tocopy--)
	{
		if (new_dest > new_src)
			new_dest[size_tocopy] = new_src[size_tocopy];
		else
			*new_dest++ = *new_src++;
	}
	return (dest);
}
