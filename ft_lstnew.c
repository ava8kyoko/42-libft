/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:45:32 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/25 15:57:32 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMÈTRE
** 	#1. Le contenu du nouvel élément.
**
** VALEUR DE RETOUR
** 	Le nouvel element
**
** FONCTION EXTERNE AUTORISÉE
** 	malloc
**
** DESCRIPTION
** 	Alloue (avec malloc(3)) et renvoie un nouvel élément. La variable
** 	content est initialisée à l’aide de la valeur du paramètre content.
** 	La variable ’next’ est initialisée à NULL.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = NULL;
	new_element = malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}
