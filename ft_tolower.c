/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 13:25:35 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/06 22:58:15 by kyoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** tolower()
** 		Convertie les lettres en majuscules ou minuscules
** 		i.e. convertit la lettre c en minuscule si c'est possible.
** 			Si c n'est ni une valeur unsigned char, ni EOF, le comportement
** 			de ces fonctions est imprévisible.
** VALEUR RENVOYÉE
** 		La valeur renvoyée est celle de la lettre convertie, ou bien c
** 			si la conversion n'était pas possible.
** CONFORMITÉ
** 		C89, C99, BSD 4.3.
** BOGUES
** 		La définition de « majuscule » et « minuscule » dépend des paramètres
** 		régionaux (localisation) en vigueur. Par exemple, la localisation C
** 		par défaut ne connaît rien concernant les accents et n'effectue donc
** 		aucune conversion.
** 		Dans certaines langues, des lettres minuscules n'ont pas d'équivalent
** 		majuscule, comme par exemple le caractère allemand « ß ».
*/

#include "libft.h"

int	ft_tolower(int character)
{
	if ('A' <= character && character <= 'Z')
		return (character + 32);
	return (character);
}

/*
** int     ft_tolower(int character)
** {
**     if (ft_isupper(character))
**         return (character + 32);
**     return (character);
** }
*/
