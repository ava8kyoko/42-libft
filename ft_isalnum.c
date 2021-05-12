/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 12:46:27 by mchampag          #+#    #+#             */
/*   Updated: 2021/05/12 12:58:05 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isalnum()
** 		Ces fonctions vérifient si le caractère c, qui doit avoir
** 			la valeur d'un unsigned char ou valoir EOF, entre dans une
** 			catégorie donnée d’après les paramètres régionaux indiqués.
** 			Les fonctions sans suffixe « _l » réalisent les vérifications
** 			à partir des paramètres régionaux actuels.
** 		i.e. vérifie s’il s’agit d’un caractère alphanumérique.
** 			C'est équivalent à (isalpha(c) || isdigit(c)).
** VALEUR RENVOYÉE
** 		Les valeurs renvoyées sont non nulles si le caractère c entre dans
** 			la catégorie testée et zéro sinon.
** CONFORMITÉ
** 		?
** NOTES
** 		L'appartenance d'un caractère à une catégorie dépend des paramètres
** 		régionaux. Par exemple isupper() ne reconnaîtra pas la lettre
** 		majuscule latine e accent aigu (É) comme une majuscule avec les
** 		paramètres régionaux C par défaut.
*/

#include "libft.h"

int		ft_isalnum(int c)
{
	return(isalpha(c) || isdigit(c));
}

/*
int		ft_isalnum(int c)
{
	if (isalpha(c) || isdigit(c))
		return (1);
	return(0);
}
*/
