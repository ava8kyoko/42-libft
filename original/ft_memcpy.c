/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:08:05 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/09 10:57:59 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memcpy()
**	Cette fonction permet de copier un bloc de mémoire spécifié par le
**	paramètre source, et dont la taille est spécifiée via le paramètre
**	size, dans un nouvel emplacement désigné par le paramètre destination.
**	Il est bien entendu qu'il est de votre responsabilité d'allouer
**	suffisamment de mémoire pour le bloc de destination afin qu'il puisse
**	contenir toutes les données.
**
**	En cas de chevauchement des deux blocs de mémoire (source et destination)
**	le comportement de la fonction memcpy n'est pas garanti. Dans ce cas,
**	veuillez préférer l'utilisation de la fonction memmove.
**
**	Attention, contrairement à strcpy, aucun test sur une éventuelle valeur
**	nulle n'est réalisé pour stopper la copie. Seule la taille du bloc sera
**	considérée.
**
** PARAMÈTRES
**	destination : permet de spécifier l'adresse du bloc mémoire devant
**					recevoir les données à copier. Vous devez pré-allouer
**					ce bloc de mémoire (certainement via la fonction malloc).
**	source : permet de définir l'adresse du bloc de mémoire à dupliquer.
**	size : indique le nombre d'octets à dupliquer.
**
** VALEUR RENVOYÉE
** 		La fonction renvoie l'adresse du bloc de mémoire de destination.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size_tocopy)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (size_tocopy--)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}
