/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:56:22 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/25 15:58:30 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMÈTRES
** 	#1 L’adresse du pointeur vers un élément.
** 	#2. L’adresse de la fonction à appliquer.
**
** VALEUR DE RETOUR
** 	None
**
** FONCTIONS EXTERNES AUTORISÉES
** 	None
**
** DESCRIPTION
** 	Itère sur la list lst et applique la fonction f au contenu chaque
** 	élément.
*/

#include "libft.h"

void	ft_lstiter(t_list *list, void (*f)(void *))
{
	while (list)
	{
		f(list->content);
		list = list->next;
	}
}
