/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:20:23 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/25 15:57:19 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMÈTRES
** 	#1. L’adresse du pointeur vers le premier élément de la liste.
** 	#2. L’adresse du pointeur vers l’élément à rajouter à la liste.
**
** VALEUR DE RETOUR
** 	None
**
** FONCTION EXTERNE AURTORISÉE
** 	None
**
** DESCRIPTION
** 	Ajoute l’élément ’new’ au début de la liste.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
