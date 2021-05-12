/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 12:56:27 by mchampag          #+#    #+#             */
/*   Updated: 2021/05/11 23:21:56 by kyoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isascii()
** 		Fonctions de classification de caractères
** 			Ces fonctions vérifient si le caractère c, qui doit avoir
** 			la valeur d'un unsigned char ou valoir EOF, entre dans une
** 			catégorie donnée d’après les paramètres régionaux indiqués.
** 			Les fonctions sans suffixe « _l » réalisent les vérifications
** 			à partir des paramètres régionaux actuels.
** 		i.e. vérifie si c est un unsigned char sur 7 bits, entrant dans
** 			le jeu de caractères ASCII.
** VALEUR RENVOYÉE
** 		Les valeurs renvoyées sont non nulles si le caractère c entre dans
** 			la catégorie testée et zéro sinon.
** CONFORMITÉ
** 	?
** NOTES
** 		L'appartenance d'un caractère à une catégorie dépend des paramètres
** 			régionaux. Par exemple isupper() ne reconnaîtra pas la lettre
** 			majuscule latine e accent aigu (É) comme une majuscule avec les
** 			paramètres régionaux C par défaut.
*/


#include "libft.h"

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return(1);
	return (0);
}
