/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 12:20:51 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/25 15:55:53 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMÈTRES
** 	#1. La chaine de laquelle extraire la nouvelle chaine.
** 	#2. L’index de début de la nouvelle chaine dans la chaine ’s’.
** 	#3. La taille maximale de la nouvelle chaine.
**
** VALEUR DE RETOUR
** 	La nouvelle chaine de caractere. NULL si l’allocation échoue.
**
** FONCTIONS EXTERNES AUTORISÉES
** 	malloc
**
** DESCRIPTION
** 	Alloue (avec malloc(3)) et retourne une chaine de caractères issue
** 	de la chaine ’s’.
** 	Cette nouvelle chaine commence à l’index ’start’ et a pour taille
** 	maximale ’len’
*/

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t size_tocopy)
{
	char			*memory_space;
	size_t			i;
	unsigned int	len_s;

	if (!str)
		return (NULL);
	if (start >= ft_strlen(str))
		size_tocopy = 0;
	else if (ft_strlen(str) < (start + size_tocopy))
		size_tocopy = ft_strlen(str) - start;
	memory_space = malloc(sizeof(char) * (size_tocopy + 1));
	if (!memory_space)
		return (NULL);
	len_s = (unsigned int)ft_strlen(str);
	i = 0;
	while (str[start] != '\0' && start <= len_s && size_tocopy--)
	{
		memory_space[i] = str[start];
		i++;
		start++;
	}
	memory_space[i] = '\0';
	return (memory_space);
}
