/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:58:24 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/24 17:01:32 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMÈTRES
** 	#1. L’adresse du pointeur vers un élément.
** 	#2. L’adresse de la fonction à appliquer.
**
** VALEUR DE RETOUR
** 	La nouvelle liste. NULL si l’allocation échoue.
**
** FONCTIONS EXTERNES AUTORISÉES
** malloc, free
**
** DESCRIPTION
** 	Itère sur la liste lst et applique la fonction f au contenu de chaque
** 	élément. Crée une nouvelle liste résultant des applications successives
** 	de f. la fonction del est la pour detruire le contenu d un element
** 	si necessaire
*/

t_list *ft_lstmap(t_list *list, void *(*fonction)(void *), void (*delete)(void *));
{
	
}
