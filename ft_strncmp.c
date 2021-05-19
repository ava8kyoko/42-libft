/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:53:03 by mchampag          #+#    #+#             */
/*   Updated: 2021/05/18 17:53:54 by kyoko            ###   ########.fr       */
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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
 	printf("%s %s\n", (char *)s1, (char *)s2);
	i = 0;
	if (n == 0 || (!*s1 || !*s2) || s1[0] != s2[0])
		return (0);
	while (s1[i] == s2[i] && i <= (n - 1))
	{	
		printf("%ld\n", i);
		i++;
	}
	return (ft_strlen(s1) - ft_strlen(s2));
}

/*
** int	ft_strncmp(const char *s1, const char *s2, size_t n)
** {
** 	printf("%s %s\n", (char *)s1, (char *)s2);
** 	size_t	i;
** 
** 	i = 0;
** 	if (n == 0 || (!*s1 || !*s2))
** 		return (0);
** 	while (s1[i] == s2[i] && i < n)
** 		i++;
** 	return (ft_strlen(s1) - ft_strlen(s2));
** }
*/

int		main(void)
{
	char str1[] = "ABCDE";
	char str2[] = "ABCDE";
	int result1 = ft_strncmp(str1, str2, 5);
	printf("%d\n", result1);

	char str3[] = "ABCDE";
	char str4[] = "12345";
	int result2 = ft_strncmp(str3, str4, 5);
	printf("%d\n", result2);

	char str5[] = "ABCDE";
	char str6[] = "AB";
	int result3 = ft_strncmp(str5, str6, 5);
	printf("%d\n", result3);

	char str7[] = "ABC";
	char str8[] = "ABCDE";
	int result4 = ft_strncmp(str7, str8, 5);
	printf("%d\n", result4);
/*
	char str9[] = "ABCDE";
	char str10[] = "AB";
	int result5 = ft_strncmp(str9, str10, 3);
	printf("%d\n", result5);

	char str11[] = "\0";
	char str12[] = "123456";
	int result6 = ft_strncmp(str11, str12, 3);
	printf("%d\n", result6);

	char str13[] = "ABCDE";
	char str14[] = "\0";
	int result7 = ft_strncmp(str13, str14, 2);
	printf("%d\n", result7);
*/
	return (0);
}