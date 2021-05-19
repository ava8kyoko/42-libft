/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 21:37:52 by kyoko             #+#    #+#             */
/*   Updated: 2021/05/19 15:41:11 by kyoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** FONCTIONS IS et TO
*/

/*
** ft_tolower
*/

int main(void)
{
	printf("%d\n", ft_tolower('A'));
	printf("%d\n", ft_tolower('a'));
	printf("%d\n", ft_tolower('1'));
	printf("%d\n", ft_tolower(32));
	printf("%d\n", ft_tolower('/'));
	printf("%d\n", ft_tolower(127));
	return (0);
}

/*
** ft_toupper
*/

int main(void)
{
	printf("%d\n", ft_toupper('A'));
	printf("%d\n", ft_toupper('a'));
	printf("%d\n", ft_toupper('1'));
	printf("%d\n", ft_toupper(32));
	printf("%d\n", ft_toupper('/'));
	printf("%d\n", ft_toupper(127));
	return (0);
}

/*
** ft_isalpha
*/

int main(void)
{
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('1'));
	printf("%d\n", ft_isalpha(32));
	printf("%d\n", ft_isalpha('/'));
	printf("%d\n", ft_isalpha(127));
	return (0);
}

/*
** ft_isdigit
*/

int	main(void)
{
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit(' '));
	printf("%d\n", ft_isdigit('X'));
	printf("%d\n", ft_isdigit(32));
	printf("%d\n", ft_isdigit('/'));
	printf("%d\n", ft_isdigit(127));
	return (0);
}

/*
** ft_isprint
*/

int main(void)
{
	printf("%d\n", ft_isprint('A'));
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('1'));
	printf("%d\n", ft_isprint(32));
	printf("%d\n", ft_isprint('/'));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint(127));
	return (0);
}

/*
** FONCTIONS STR
*/

/*
** ft_strlen
*/

int		main(void)
{
	char	str1[] = "Je me couche vraiment trop tard.";
	char	str2[] = "1234567890";
	char	str3[] = "AlL0 |<omm3nT v45-tU?";
	int	len1 = ft_strlen(str1);
	int	len2 = ft_strlen(str2);
	int	len3 = ft_strlen(str3);
	printf("La longueur de la chaine est %d.\n", len1);
	printf("La longueur de la chaine est %d.\n", len2);
	printf("La longueur de la chaine est %d.\n", len3);
	return 0;
}

/*
** ft_strlcpy
*/

// NOTE: AJOUT AFFICHER LES CARACTÈRES NON-IMPRIMABLES

int		main(void)
{
	char dst1[] = "1234567890";
	//const char src[] = "56";
	//size_t size = 1;

	size_t	len1 = ft_strlcpy(dst1, "ABCD", 2);
	printf("La longueur de la chaine est %lu.\n", len1);

		size_t	len2 = ft_strlcpy(dst1, "A", 0);
	printf("La longueur de la chaine est %lu.\n", len2);

	return (0);
}

/*
** ft_strchr
*/

int	main(void)
{
	printf("%s\n", ft_strchr("patate", 't'));
	printf("%s\n", ft_strchr("patate", '0'));
	return (0);
}

/*
** ft_strrchr
*/

int     main(void)
{
    printf("%s\n", ft_strrchr("banane", 'a'));
    printf("%s\n", ft_strrchr("banane", '0'));
    return (0);
}

/*
** ft_strncmp
*/

/*
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
*/

int		main(void)
{
	char str1[] = "ABCDE";
	char str2[] = "ABCDE";
	int result1 = ft_strncmp(str1, str2, 5);
	printf("len_s1 - len_s2 : %d\n\n", result1);

	char str3[] = "ABCDE";
	char str4[] = "12345";
	int result2 = ft_strncmp(str3, str4, 5);
	printf("len_s1 - len_s2 : %d\n\n", result2);

	char str5[] = "ABCDE";
	char str6[] = "AB";
	int result3 = ft_strncmp(str5, str6, 5);
	printf("len_s1 - len_s2 : %d\n\n", result3);

	char str7[] = "ABC";
	char str8[] = "ABCDE";
	int result4 = ft_strncmp(str7, str8, 5);
	printf("len_s1 - len_s2 : %d\n\n", result4);

	char str9[] = "ABCDE";
	char str10[] = "ABCDE";
	int result5 = ft_strncmp(str9, str10, 3);
	printf("len_s1 - len_s2 : %d\n\n", result5);

	char str11[] = "\0";
	char str12[] = "S1vide";
	int result6 = ft_strncmp(str11, str12, 5);
	printf("len_s1 - len_s2 : %d\n\n", result6);

	char str13[] = "S2vide";
	char str14[] = "\0";
	int result7 = ft_strncmp(str13, str14, 5);
	printf("len_s1 - len_s2 : %d\n\n", result7);

	char str15[] = "ABCDE";
	char str16[] = "ABCDE";
	int result8 = ft_strncmp(str15, str16, 10);
	printf("len_s1 - len_s2 : %d\n\n", result8);

	return (0);
}

/*
** ft_strnstr
*/

/*
char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	k;
	char	new_s1[] = "x";
	//char	*new_s1;

	i = 0;
	k = 0;
	//new_s1 = "x";
	printf("i : %ld\n", i);
	printf("k : %ld\n", i);
	if (!*s2)
		return ((char *)s1);
	if (!*s1 || len != 0)
	{
		while (s1[i] != '\0' && s1[i] != s2[0])
		{
			i++;
			printf("i : %ld\n", i);
		}
		while (s1[i] == s2[k])			
		{
			new_s1[k] = s1[i];
			printf("%s\n", new_s1);
			if (ft_strlen(new_s1) == ft_strlen(s2) || 
					(ft_strlen(s2) > len && ft_strlen(new_s1) == len))
				return ((char *)(s1));
			i++;
			printf("i : %ld\n", i);
			k++;
			printf("K : %ld\n", k);
		}
	}		
	return (NULL);
}
*/

int	main(void)
{
	printf("%s\n\n", ft_strnstr("ABCD", "CD", 2));
	printf("%s\n\n", ft_strnstr("ABCD", "EF", 2));
	printf("%s\n\n", ft_strnstr("ABCD", "CD", 3));
	printf("%s\n\n", ft_strnstr("ABCD", "CD", 1));
	printf("%s\n\n", ft_strnstr("AB", "ABCD", 4));
	printf("%s\n\n", ft_strnstr("AB", "ABCD", 2));

	return (0);
}
