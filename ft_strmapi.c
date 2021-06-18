/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 13:12:03 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/18 15:02:01 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMÈTRES
** 	#1. La chaine de caractères sur laquelle itérer
** 	#2. La fonction à appliquer à chaque caractère.
**
** VALEURS DE RETOUR
** 	La chaine de caractères résultant des applications successives de f.
** 	Retourne NULL si l’allocation échoue.
**
** FONCTIONS EXTERNES AUTORISÉES
** 	malloc
**
** DESCRIPTION
** 	Applique la fonction ’f’ à chaque caractère de la chaine de caractères
** 	passée en argument pour créer une nouvelle chaine de caractères
** 	(avec malloc(3)) résultant des applications successives de ’f’.
**
*/

#include "libft.h"

char	*ft_strmapi(char const *str_toIterate, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t i;

	if (!str_toIterate || !f)
		return (NULL);
	if (!(new_str = malloc(sizeof(char) * ft_strlen(str_toIterate) + 1)))
		return (NULL);
	i = 0;
	while (str_toIterate[i])
	{
		new_str[i] = (*f)(i, str_toIterate[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// char my_func(unsigned int i, char str)
// {
// 	printf("My inner function: index = %d and %c\n", i, str);
// 	return str - 32;
// }

// int main()
// {
// 	char str[10] = "hello.";
// 	printf("The result is %s\n", str);
// 	char *result = ft_strmapi(str, my_func);
// 	printf("The result is %s\n", result);
// 	return (0);
// }
