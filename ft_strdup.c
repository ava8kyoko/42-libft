/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 13:06:32 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/09 15:21:20 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strndup()
**	Cette fonction permet de dupliquer une chaîne de caractères.
**
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

char *ft_strdup(const char *src)
{
	char	*duplicated;
	char	*sptr;
	char	*dptr;

	sptr = (char *)src;
	while (*sptr++)
		;
	duplicated = malloc(sptr - src + 1);
	if (!duplicated)
		return (NULL);
	dptr = duplicated;
	while ((*dptr++ = *src++) != '\0')
		;
	*dptr = '\0';
	return (duplicated);
}

/*
char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	while (src[len])
		len++;
	str = (char*)malloc(sizeof(*str) * (len + 1));
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}


char	*ft_strdup(char *src)
{
	char	*dup;
	char	*sptr;
	char	*dptr;

	sptr = (char *)src;
	while (*sptr++)
		;
	dup = malloc(sptr - src + 1);
	if (!dup)
		return (NULL);
	dptr = dup;
	while ((*dptr++ = *src++) != '\0')
		;
	return (dup);
}
*/
