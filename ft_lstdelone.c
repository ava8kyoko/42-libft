/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 14:42:08 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/24 15:05:43 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMÈTRES
** 	#1. L’élement à free
** 	#2. L’adresse de la fonction permettant de supprimer le contenu de
** 		l’élement.
**
** VALEUR DE RETOUR
** 	None
**
** FONCTIONS EXTERNES AUTORISÉES
** 	free
**
** DESCRIPTION
** 	Libère la mémoire de l’élément passé en argument en utilisant
** 	la fonction del puis avec free(3). La mémoire de next ne doit pas être
** 	free.
*/

#include "libft.h"

void	ft_lstdelone(t_list *list, void (*delete)(void *))
{
	if (!list || !delete)
		return ;
	delete (list->content);
	free (list);
}
