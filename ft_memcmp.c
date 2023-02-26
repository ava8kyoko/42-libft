/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:31:46 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/21 14:58:49 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memcmp() Comparaison de zones mémoire
**	Cette fonction permet de comparer le contenu de deux blocs de mémoire
**	spécifiés par les deux premiers paramètres de la fonction. Le troisième
**	paramètre, size, permet de spécifier le nombre d'octets sur lequel
**	comparer les deux blocs. Les octets des deux blocs sont comparés deux à
**	deux. Tant que les deux octets comparés sont égaux, la fonction passe aux
**	deux suivants. Si les deux octets comparés sont différents, alors la
**	fonction renvérra lequel des deux blocs est le plus petit en termes de
**	contenu.
**
**	Attention, contrairement à strcpy, aucun test sur une éventuelle valeur
**	nulle n'est réalisé pour stopper la comparaison. Seule la taille du bloc
**	sera considérée.
**
** PARAMÈTRES
**	pointer1 : permet de spécifier l'adresse du premier bloc mémoire
**				à comparer.
**	pointer2 : permet de spécifier l'adresse du second bloc mémoire
**				à comparer.
**	size : indique le nombre d'octets maximal à comparer.
**
** VALEUR RENVOYÉE
**	Trois cas sont possibles en termes de valeur de retour. Soit la valeur
**	de retour est négative : dans ce cas, le premier octet qui différe entre
**	les deux blocs est plus petit dans le premier bloc. Soit la valeur de
**	retour est nulle : dans ce cas, les deux blocs ont leurs contenus
**	strictement identique. Enfin, si la valeur de retour est positive :
**	dans ce cas, le premier octet qui différe entre les deux blocs est plus
**	grand dans le premier bloc.
*/

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t size_tocompare)
{
	unsigned char	*new_str1;
	unsigned char	*new_str2;

	new_str1 = (unsigned char *)str1;
	new_str2 = (unsigned char *)str2;
	if (size_tocompare == 0)
		return (0);
	while (*new_str1 == *new_str2 && --size_tocompare)
	{
		new_str1++;
		new_str2++;
	}
	return ((int)(*new_str1 - *new_str2));
}
