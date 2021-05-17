/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:53:03 by mchampag          #+#    #+#             */
/*   Updated: 2021/05/17 14:26:13 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strcmp(), strncmp()
	Comparaison de deux chaînes.
strcmp()
	compare les deux chaînes s1 et s2.
    Elle renvoie un entier négatif, nul, ou positif, si s1  est
    respectivement inférieure, égale ou supérieure à s2.
strncmp()
	est identique sauf qu'elle ne com­pare que les n premiers
	caractères de s1.
VALEUR RENVOYÉE
	un  entier inférieur,  égal  ou supérieur à zero si s1
	(ou ses n pre­miers octets)  est  respectivement  inférieure, égale
	ou supérieure à s2.
CONFORMITÉ
   SVID 3, POSIX, BSD 4.3, ISO 9899.
*/
#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n)
		i++;
	return (i - ft_strlen(s2));
}

int		main(void)
{
	char str1[] = "ABCDE";
	char str2[] = "12345";
	int result = ft_strncmp(str1, str2, 4);
	printf("%d\n", result);
	return (0);
}
