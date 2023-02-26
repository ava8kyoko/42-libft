/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 15:48:55 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/25 15:59:11 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMÈTRES
** 	#1. L’adresse du pointeur vers le premier élément de la liste.
** 	#2. L’adresse du pointeur vers l’élément à rajouter	à la liste.
**
** VALEUR DE RETOUR
** 	None
**
** FONCTIONS EXTERNES AUTORISÉES
** 	None
**
** DESCRIPTION
** 	Ajoute l’élément new à la fin de la liste.
*/

#include "libft.h"

void	ft_lstadd_back(t_list **alist, t_list *new)
{
	t_list	*last_list;

	if (alist)
	{
		if (*alist == NULL)
			*alist = new;
		else
		{
			last_list = ft_lstlast(*alist);
			last_list->next = new;
		}
	}
}
