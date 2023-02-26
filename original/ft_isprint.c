/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 13:12:07 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/06 23:00:51 by kyoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isprint()
** 		Ces fonctions vérifient si le caractère c, qui doit avoir
** 			la valeur d'un unsigned char ou valoir EOF, entre dans
** 			une catégorie donnée d’après les paramètres régionaux
** 			indiqués. Les fonctions sans suffixe « _l » réalisent
** 			les vérifications à partir des paramètres régionaux actuels.
** 		i.e. vérifie s'il s'agit d'un caractère imprimable, y compris
** 			l'espace.
** VALEUR RENVOYÉE
** 		Les valeurs renvoyées sont non nulles si le caractère c entre
** 			dans la catégorie testée et zéro sinon.
** CONFORMITÉ
** 	?
** NOTES
** 		L'appartenance d'un caractère à une catégorie dépend des paramètres
** 			régionaux. Par exemple isupper() ne reconnaîtra pas la lettre
** 			majuscule latine e accent aigu (É) comme une majuscule avec les
** 			paramètres régionaux C par défaut.
*/

#include "libft.h"

int	ft_isprint(int character)
{
	if (32 <= character && character <= 126)
		return (1);
	return (0);
}
