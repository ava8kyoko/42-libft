/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:58:24 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/25 14:25:22 by mchampag         ###   ########.fr       */
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

#include "libft.h"

t_list	*ft_lstmap(t_list *list, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_elem;
	t_list	*new_list;

	if (!list || !f)
		return (NULL);
	new_list = NULL;
	while (list)
	{
		new_elem = ft_lstnew(f(list->content));
		if (!new_elem)
			ft_lstclear(&new_list, del);
		ft_lstadd_back(&new_list, new_elem);
		list = list->next;
	}
	return (new_list);
}

// void	fonction2(void *str)
// {
// 	printf("%s\n", (char *)str);
// }

// void	*fonction(void *str)
// {
// 	printf("%s\n", (char *)str);

// 	return (str);
// }

// void	del(void *str)
// {
// 	return ;
// }

// int	main(void)
// {
// 	t_list *list;
// 	void	(*fonction2)(void *);
// 	void	*(*fonction)(void *);
// 	void	(*del)(void *);

// 	list = ft_lstnew("Allo");
// 	list->next = ft_lstnew("Bonjour");
// 	list->next->next = ft_lstnew("Bonsoir");
// 	printf("%d\n", ft_lstsize(list));
// 	ft_lstmap(list, (*fonction), (*delete));
// 	return (0);
// }
