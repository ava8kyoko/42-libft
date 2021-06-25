/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:34:11 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/25 14:22:08 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMÈTRES
** 	#1. L’adresse du pointeur vers un élément.
** 	#2. L’adresse de la fonction permettant de supprimer le contenu
** 		d’un élément.
**
** VALEUR DE RETOUR
** 	None
**
** FONCTIONS EXTERNES AUTORISÉES
** 	free
**
** DESCRIPTION
** 	Supprime et libère la mémoire de l’élément passé en paramètre,
** 	et de tous les élements qui suivent, à l’aide de del et de free(3)
** 	Enfin, le pointeur initial doit être mis à NULL.
*/

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del)(void *))
{
	t_list	*temp_list;

	if (list)
	{
		while (*list)
		{
			temp_list = *list;
			ft_lstdelone(*list, del);
			*list = temp_list->next;
		}
	}
}
