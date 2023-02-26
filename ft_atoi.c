/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:25:00 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/21 14:47:11 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** atoi() ASCII to integer
** 	Convertir une chaîne de caractères (48 à 57) en entier, prend en compte
**	le signe (positif '+' et négatif '-').
**
** PARAMÈTRE
**	str: contient la chaîne de caractères à convertir en une donnée de type
**			int.
**
** VALEUR RENVOYÉE
** 	Le résultat de la conversion ou 0 si la chaîne ne contient pas une donnée
**	numérique entière.
**
** ATTENTION
** 	Il n'est pas possible de distinguer la chaîne "0" d'une chaîne
** 	ne contenant pas un nombre entier.
**
** CARACTÈRES À NE PAS TENIR EN COMPTE
** \a : appel (cloche) '7'
** \b : retour arrière '8'
** \t : tabulation horizontale '9'
** \n : saut de ligne '10'
** \v : tabulation verticale '11'
** \f : changement de page '12'
** \r : retour chariot '13'
** \e ou ' ' : expace '27'
**
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	sign;
	long	converted;

	sign = 1;
	converted = 0;
	while ((*str >= 9 && 13 >= *str) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		if ((converted * 10) + (*str - '0') < converted && sign == 1)
			return (-1);
		else if ((converted * 10) + (*str - '0') < converted && sign == -1)
			return (0);
		converted *= 10;
		converted += *str++ - '0';
	}
	return (sign * converted);
}
