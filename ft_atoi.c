/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:25:00 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/03 14:45:29 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** atoi()
** 	Convertir une chaîne de caractères (48 à 57) en entier
** VALEUR RENVOYÉE
** 	Le résultat de la conversion ou 0 si invalide.
*/

#include "libft.h"

int		ft_atoi(const char *str_toconvert)
{
	int converted;

	converted = 0;
	while (*str_toconvert != '\0')
	{
		converted = converted * 10 + (*str_toconvert - '0');
		if (*str_toconvert - '0' > 9 || converted < 0)
			return (0);
		str_toconvert++;
	}
	return (converted);
}
