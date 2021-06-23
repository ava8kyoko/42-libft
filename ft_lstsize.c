/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:31:33 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/23 16:38:00 by mchampag         ###   ########.fr       */
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

int	ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	while (lst->next != NULL)
	{
		i++;
	}
	return (i);
}
