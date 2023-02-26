/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:31:33 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/25 15:56:41 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMÈTRES
** 	#1. Le début de la liste.
**
** VALEUR DE RETOUR
** 	Taille de la liste.
**
** FONCTIONS AUTORISÉES
** 	None
**
** DESCRIPTION
** 	Compte le nombre d’éléments de la liste.
*/

#include "libft.h"

int	ft_lstsize(t_list *list)
{
	int	count;

	count = 0;
	while (list)
	{
		list = list->next;
		count++;
	}
	return (count);
}
