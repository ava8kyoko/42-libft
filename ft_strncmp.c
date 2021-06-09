/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:53:03 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/09 11:28:17 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strncmp
**	Cette fonction permet de comparer deux chaînes de caractères et de savoir
**	si la première est inférieure, égale ou supérieure à la seconde. Cette
**	comparaison sera faites dans l'ordre lexicographique (et donc, en tenant
**	compte des valeurs ASCII des différents caractères comparés). Néanmoins
**	la comparaison se fera au maximum sur les length premiers caractères.
**
**	En langage C, les chaînes de caractères sont qualifiées d'AZT : A
**	Zéro Terminal. Cela signifie qu'une chaîne de caractères se termine
**	forcément par un code ASCII nul (pouvant aussi être représenté par '\0').
**
** PARAMÈTRES
**	first : la première chaîne de caractères à comparer.
**	second : la seconde chaîne de caractères à comparer.
**	length : le nombre maximal (un entier non signé) de caractères à comparer.
**
** VALEUR DE RETOUR
**	Trois cas distincts doivent être considérés. Soit les deux chaînes sont
**	égales : dans ce cas, une valeur nulle sera retournée. Soit la première
**	chaîne est plus petite que la seconde (dans l'ordre lexicographique) :
**	dans ce cas, une valeur négative sera retournée. Soit la première chaîne
**	est plus grande que la seconde : dans ce dernier cas, une valeur positive
**	sera renvoyées. Dans tous les cas, la valeur absolue indiquera la position
**	du premier caractères permettant de produire le résultat.
**
** ATTENTION
**	Notez bien que la comparaison porte au maximum sur les length
**	premiers caractères de la chaîne.
*/

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t len_tocompare)
{
	size_t	i;

	i = 0;
	if (len_tocompare == 0)
		return (0);
	while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]
		&& --len_tocompare)
		i++;
	return ((unsigned char)(str1[i]) - (unsigned char)(str2[i]));
}
