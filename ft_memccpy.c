/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:12:20 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/09 10:28:37 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memccpy()
** 	Cette fonction permet de copier un bloc de mémoire spécifié par le
**	paramètre source dans un nouvel emplacement désigné par le paramètre
**	destination. La copie s'arrête soit après la première occurrence du
**	caractère ch, soit à la taille maximale spécifiée par le paramètre
**	maxSize.
**
**	Il est bien entendu qu'il est de votre responsabilité d'allouer
**	suffisamment de mémoire pour le bloc de destination afin qu'il puisse
**	contenir toutes les données.
**
**	En cas de chevauchement des deux blocs de mémoire (source et destination)
**	le comportement de la fonction memccpy n'est pas garanti. Dans ce cas,
**	veuillez préférer l'utilisation de la fonction memmove.
**
** PARAMÈTRES
**	destination : permet de spécifier l'adresse du bloc mémoire devant
**		recevoir les données à copier. Vous devez pré-allouer ce bloc de
**		mémoire (certainement via la fonction malloc).
**	source : permet de définir l'adresse du bloc de mémoire à dupliquer.
**	ch : le caractère permettant de mettre fin à la copie du bloc de mémoire.
**			Cet entier sera converti en unsigned char.
**	maxSize : indique le nombre maximal d'octets à dupliquer.
**
** VALEUR RENVOYÉE
** 	Si aucune occurrence du caractère ch n'est trouvé, la fonction
**	renverra un pointeur nul. Dans le cas contraire, la fonction
**	retournera un pointeur vers le caractère ch dans la chaîne finale.
*/

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int character_tostop,
			size_t maxSize_tocopy)
{
	unsigned char	*new_dest;
	unsigned char	*new_src;

	new_dest = (unsigned char *)dest;
	new_src = (unsigned char *)src;
	while (maxSize_tocopy--)
	{
		*new_dest = *new_src;
		if (*new_dest == (unsigned char)character_tostop)
			return ((void *)(++new_dest));
		++new_dest;
		++new_src;
	}
	return (NULL);
}
