/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:48:24 by mchampag          #+#    #+#             */
/*   Updated: 2021/05/12 12:59:20 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isalpha()
** 		Routines de classification de caractères
** 		i.e. vérifie si l'on a un caractère alphabétique. Dans la
** 			localisation "C" standard, c'est équivalent à
** 			(isupper(c) || islower(c)). Dans certaines localisations,
** 			il peut y avoir des caractères supplémentaires pour lesquels
** 			isalpha() est vrai, c'est-à-dire pour des lettres qui ne sont
** 			ni majuscules ni minuscules.
** VALEUR RENVOYÉE
** 		Non nulles si le caractère c entre dans la catégorie
** 			testée, et zéro sinon
** CONFORMITÉ
** 		C99, BSD 4.3. C89
** NOTES
** 		L'appartenance d'un caractère à une catégorie dépend de la
** 			localisation en cours. Par exemple, isupper() ne reconnaîtra
** 			pas un E-accent-aigu comme une majuscule dans la localisation
** 			C par défaut.
*/

#include "libft.h"

int		ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}

/*
** int		ft_isalpha(int c)
** {
** 	if (ft_isupper(c) || ft_islower(c))
** 		return (1);
** 	return (0);
** }
*/


/*
** int     ft_isalpha(int c)
** {
**     if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
**         return (1);
**     return (0);
** }
*/
