/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:45:46 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/24 13:42:01 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMÈTRES
** 	#1. Le début de la liste.
**
** VALEUR DE RETOUR
** 	Dernier élément de la liste
**
** FONCTIONS EXTERNES AUTORISÉES
** 	None
**
** DESCRIPTION
** 	Renvoie le dernier élément de la liste.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *list)
{
	if (list)
	{
		while (list->next)
			list = list->next;
	}
	return (list);
}
