/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 21:37:52 by kyoko             #+#    #+#             */
/*   Updated: 2021/05/18 11:02:23 by kyoko            ###   ########.fr       */
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

int		main(void)
{
	char str1[] = "ABCDE";
	char str2[] = "123456";
	int result1 = ft_strncmp(str1, str2, 6);
	printf("%d\n", result1);

	char str3[] = "ABCDE";
	char str4[] = "1234";
	int result2 = ft_strncmp(str3, str4, 4);
	printf("%d\n", result2);

	char str5[] = "ABCDE";
	char str6[] = "12345";
	int result3 = ft_strncmp(str5, str6, 5);
	printf("%d\n", result3);

	char str7[] = "ABCDE";
	char str8[] = "123456";
	int result4 = ft_strncmp(str7, str8, 0);
	printf("%d\n", result4);

	char str9[] = "ABCDE";
	char str10[] = "123456";
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

	return (0);
}
