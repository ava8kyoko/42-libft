/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:25:00 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/06 00:20:55 by kyoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** atoi() ASCII to integer
** 	Convertir une chaîne de caractères (48 à 57) en entier, prend en compte 
**	le signe (positif '+' et négatif '-').
** PARAMÈTRE
**	str: contient la chaîne de caractères à convertir en une donnée de type 
**			int.
** VALEUR RENVOYÉE
** 	Le résultat de la conversion ou 0 si la chaîne ne contient pas une donnée 
**	numérique entière.
** ATTENTION
** 	Il n'est pas possible de distinguer la chaîne "0" d'une chaîne 
** 	ne contenant pas un nombre entier. 
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
   
int		ft_atoi(const char *str)
{
	int	sign;
	int	converted;

	sign = 1;
	converted = 0;
	while ((*str >= 7 && 13 >= *str) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		converted *= 10;
		converted += *str++ - '0';
	}
	return (sign * converted);
}
