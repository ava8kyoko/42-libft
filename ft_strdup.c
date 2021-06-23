/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 13:06:32 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/23 10:16:39 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strndup()
**	Cette fonction permet de dupliquer une chaîne de caractères.
**
** ATTENTION
**	La fonction strdup alloue une nouvelle zone de mémoire via la fonction
**	malloc afin d'y copier la chaîne de caractères initiale. Il est donc
**	impératif de libérer cette zone de mémoire après utilisation via la
**	fonction free.
**
**	En langage C, les chaînes de caractères sont qualifiées d'AZT :
**	A Zéro Terminal. Cela signifie qu'une chaîne de caractères se termine
**	forcément par un code ASCII nul (pouvant aussi être représenté par '\0').
**	La fonction strdup copiera chaque caractère, un à un, jusqu'à atteindre ce
**	fameux code ASCII nul. Au passage, il sera lui aussi copié.
**
** PARAMÈTRES
**	source : permet de définir l'adresse de la chaîne de caractères à
**	dupliquer.
**
** VALEUR DE RETOUR
**	S'il y a suffisament de mémoire pour produire la nouvelle chaîne,
**	la fonction renvoie l'adresse de la chaîne dupliquée. Dans le cas
**	contraire, un pointeur nul vous sera retourné.
*/

#include "libft.h"

char	*ft_strdup(const char *src_tocopy)
{
	char	*memory_space;
	size_t	i;
	size_t	len;

	len = ft_strlen(src_tocopy);
	memory_space = malloc(sizeof(char) * len + 1);
	if (!memory_space)
		return (NULL);
	i = 0;
	while (src_tocopy[i] != '\0' && len--)
	{
		memory_space[i] = src_tocopy[i];
		i++;
	}
	memory_space[i] = '\0';
	return (memory_space);
}
