/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:26:33 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/21 14:58:30 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memchr()
** 	Recherche la première occurence d'une valeur typée int, mais interprétée
**	en tant que char, dans un bloc de mémoire. Comme on traite un bloc de
**	mémoire et non pas une chaîne de caractères AZT (à zéro terminal), nous
**	devons aussi spécifier à la fonction la taille du bloc de mémoire dans
**	lequel réaliser la recherche.
** PARAMÈTRES
**	memoryBlock : un pointeur indiquant l'adresse du bloc mémoire à utiliser
**					pour la recherche.
**	searchedChar : le code numérique de l'octet à rechercher dans le bloc.
**	size : indique la taille du bloc de mémoire dans lequel opérer
**			la recherche.
** VALEUR RENVOYÉE
** 	Renvoit un pointeur sur l'octet correspondant (première occurence),
**	ou NULL si le caractère n'est pas présent dans la zone de mémoire
**	concernée.
*/

#include "libft.h"

void	*ft_memchr(const void *str, int character, size_t size_tosearch)
{
	unsigned char	*new_str;

	new_str = (unsigned char *)str;
	while (size_tosearch--)
	{
		if (*new_str == (unsigned char)character)
			return (new_str);
		new_str++;
	}
	return (NULL);
}
