/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:37:07 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/08 23:48:14 by kyoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strlen()
** 	Calculer la longueur d'une chaîne de caractères
** 	i.e. calcule  la  longueur  de  la chaîne de caractères s,
** 		sans compter l'octet nul (« \0 ») final.
** PARAMÈTRES
** 	const char *s : Chaine de caractère
** PROCÉDURE
** 	Tant que la valeur du caractère de la chaine est différent du cartère NULL,
** 		le compteur est incrémenté.
** VALEUR RENVOYÉE
** 	Renvoie le nombre de octets dans la chaîne s.
** CONFORMITÉ
** 	SVr4, BSD 4.3, C89, C99.
*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
size_t	ft_strlen(const char *str)
{
	while (*(str++) != '\0')
	return (str);
}
*/