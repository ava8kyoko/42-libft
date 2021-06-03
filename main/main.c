/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 21:37:52 by kyoko             #+#    #+#             */
/*   Updated: 2021/06/03 14:43:16 by mchampag         ###   ########.fr       */
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

/*
** size_t	ft_strlcpy(char *dst, const char *src, size_t size)
** {
** 	size_t i;
**
** 	i = 0;
** 	if (!*src || !*dst)
** 		return (0);
** 	if (size == 0)
** 		return (ft_strlen(src));
** 	printf("Valeur départ destination : %s\n", dst);
** 	printf("Valeur source : %s\n", src);
** 	while (src[i] != '\0' && i < (size - 1))
** 	{
** 		dst[i] = src[i];
** 		i++;
** 	}
** 	dst[i] = '\0';
** 	printf("Valeur finale destination : %s\n", dst);
** 	return (ft_strlen(src));
** }
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
/*
char	*ft_strchr(const char *s, int c)
{
	char	*new_s;

	new_s = (char *)s;
	printf("%s\n", new_s);
	while (*new_s != '\0' && *new_s != (char) c)
	{
		printf("1\n");
		printf("%s\n", new_s);
		new_s++;
	}
    if (*new_s == (char) c)
        return (char *)new_s;
	else
    	return (NULL);
}
*/
int	main(void)
{
	printf("%s\n", ft_strchr("patate", 'p'));
	printf("%s\n", ft_strchr("patate", 't'));
	printf("%s\n", ft_strchr("patate", 'h'));
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
	char str2[] = "ABCDE";
	int result1 = strncmp(str1, str2, 5);
	printf("%d\n", result1);
	int resulta = ft_strncmp(str1, str2, 5);
	printf("%d\n\n", resulta);

	char str3[] = "ABCDE";
	char str4[] = "12345";
	int result2 = strncmp(str3, str4, 5);
	printf("%d\n", result2);
	int resultb = ft_strncmp(str3, str4, 5);
	printf("%d\n\n", resultb);

	char str5[] = "ABCDE";
	char str6[] = "AB";
	int result3 = strncmp(str5, str6, 5);
	printf("%d\n", result3);
	int resultc = ft_strncmp(str5, str6, 5);
	printf("%d\n\n", resultc);

	char str7[] = "ABC";
	char str8[] = "ABCDE";
	int result4 = strncmp(str7, str8, 5);
	printf("%d\n", result4);
	int resultd = ft_strncmp(str7, str8, 5);
	printf("%d\n\n", resultd);

	char str9[] = "ABCDE";
	char str10[] = "ABCDE";
	int result5 = strncmp(str9, str10, 3);
	printf("%d\n", result5);
	int resulte = ft_strncmp(str9, str10, 3);
	printf("%d\n\n", resulte);

	char str11[] = "\0";
	char str12[] = "S1vide";
	int result6 = strncmp(str11, str12, 5);
	printf("%d\n", result6);
	int resultf = ft_strncmp(str11, str12, 5);
	printf("%d\n\n", resultf);

	char str13[] = "S2vide";
	char str14[] = "\0";
	int result7 = strncmp(str13, str14, 5);
	printf("%d\n", result7);
	int resultg = ft_strncmp(str13, str14, 5);
	printf("%d\n\n", resultg);

	char str15[] = "ABCDE";
	char str16[] = "ABCDE";
	int result8 = strncmp(str15, str16, 10);
	printf("%d\n", result8);
	int resulth = ft_strncmp(str15, str16, 10);
	printf("%d\n\n", resulth);

	char str17[] = "ABCDE";
	char str18[] = "ABCDE";
	int result9 = strncmp(str17, str18, 0);
	printf("%d\n", result9);
	int resulti = ft_strncmp(str17, str18, 0);
	printf("%d\n\n", resulti);

	char str19[] = "ABCDE";
	char str20[] = "ABCDE";
	//int result10 = strncmp(str19, str20, -1);
	//printf("%d\n", result10);
	int resultj = ft_strncmp(str19, str20, -1);
	printf("%d\n\n", resultj);

	char str21[] = "test\200";
	char str22[] = "test\0";
	int result11 = strncmp(str21, str22, 6);
	printf("%d\n", result11);
	int resultk = ft_strncmp(str21, str22, 6);
	printf("%d\n\n", resultk);

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
	printf("%s\n\n", ft_strnstr("ABCD", "ABCD", 2));
	printf("%s\n\n", ft_strnstr("ABCD", "CD", 5));
	printf("%s\n\n", ft_strnstr("ABCD", "BC", 5));
	printf("%s\n\n", ft_strnstr("ACCD", "CD", 5));
	printf("%s\n\n", ft_strnstr("ABCD", "EF", 5));
	printf("%s\n\n", ft_strnstr("ABCD", "CD", 3));
	printf("%s\n\n", ft_strnstr("ABCD", "CD", 2));
	printf("%s\n\n", ft_strnstr("AB", "ABCD", 5));
	printf("%s\n\n", ft_strnstr("AB", "ABCD", 2));
	printf("%s\n\n", ft_strnstr("fleur", "fleur", 6));
	printf("%s\n\n", ft_strnstr("star", "star", 2));
	printf("%s\n\n", ft_strnstr("chat", "", 6));
	printf("%s\n\n", ft_strnstr("", "ABCD", 5));

	return (0);
}

/*
char *ft_strnstr(const char *inside, const char *tofind, size_t len)
{
	size_t	i;
	size_t	k;
	size_t	len_tofind;
	char	*new_inside;

	i = 0;
	k = 0;
	new_inside = (char *) inside;
	len_tofind = ft_strlen(tofind);
	if (len_tofind > len)
		return (NULL);
	if (!*tofind || inside == tofind)
		return (new_inside);
	while (new_inside[i] != '\0' && i < len)
	{
		while (new_inside[i + k] != '\0' && tofind[k] != '\0'
				&& new_inside[i + k] == tofind[k] && i + k < len)
			k++;
		if (k == len_tofind)
			return (new_inside + i);
		i++;
	}
	return (NULL);
}
*/

/*
** ft_strnstr
*/

/*
char	*ft_strnstr(const char *inside, const char *tofind, size_t len_tosearch)
{
	char	*found;
	size_t	i;
	size_t	x;
	size_t	len_tofind;

	found = (char *)inside;
	i = 0;
	len_tofind = ft_strlen(tofind);
	if ((!*tofind || inside == tofind) && len_tosearch > 0)
		return (found);
	while (found[i] != '\0' && len_tosearch > 0 && i < len_tosearch)
	{
		x = 0;
		while (found[i + x] == tofind[x])
			x++;
		printf("i: %zu\n", i);
		printf("x: %zu\n", x);
		if (x == len_tofind)
			return (found + i);
		i++;
	}
	return (NULL);
}
*/

int	main(void)
{
	printf("1. YEP %s\n", ft_strnstr("PATATE", "PATATE", 6));
	printf("2. YEP %s\n", ft_strnstr("PATATE", "PATATE", 3));
	printf("3. YEP %s\n", ft_strnstr("PATATE", "", 6));
	printf("4. FAIL %s\n", ft_strnstr("", "PATATE", 6));
	printf("5. FAIL %s\n", ft_strnstr("PATATE", "PATATE", 0));
	printf("6. FAIL %s\n", ft_strnstr("abcPATATEdef", "PATATE", 3));
	printf("7. YEP %s\n", ft_strnstr("abcPATATEdef", "PATATE", 9));
	printf("8. YEP %s\n", ft_strnstr("abcPATATEdef", "TE", 12));

	return (0);
}

/*
** ft_strlcat
*/

/*
size_t    ft_strlcat(char *dst, const char *src, size_t dst_size)
{
    size_t    dst_len;
    size_t    src_len;
    size_t    end;
    size_t    i;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    end = dst_len;
    i = 0;
	printf("dst: %s\n", dst);
    if (dst_size < dst_len)
        return (dst_size + src_len);
    while (dst_size > 0 && end < dst_size - 1 && src[i])
            dst[end++] = src[i++];
    dst[end] = '\0';
	printf("dst: %s\n", dst);
    return (dst_len + src_len);
}
*/

int    main()
{
    char    str[20];
    str[0] = 'a';
    str[1] = '\0';
    printf("%zu\n", ft_strlcat(str,  "BABABABA", 18));

	char    str2[20];
    str2[0] = 'a';
    str2[1] = '\0';
    printf("%zu\n", ft_strlcat(str2,  "BABABABA", 0));

	char    str3[0];
    printf("%zu\n", ft_strlcat(str3,  "BABABABA", 18));

	return (0);
}

/*
int main(void)
{
char    *str = "Hello World!";
    char    buf[1024] = "Hello";
    char    buf2[1024] = "Hello";
    size_t    len;
    size_t    len2;

    len = ft_strlcat(buf, " World!", 1024);
    len2 = strlcat(buf2, " World!", 1024);
    if (len != len2 || strcmp(buf, buf2) != 0)
        return (0);

    strcpy(buf, "Hello");
    strcpy(buf2, "Hello");

    len = ft_strlcat(buf, " World!", 12);
    len2 = strlcat(buf2, " World!", 12);
    if (len != len2 || strcmp(buf, buf2) != 0)
        return (0);

    strcpy(buf, "Hello");
    strcpy(buf2, "Hello");

    len = ft_strlcat(buf, " World!", 0);
    len2 = strlcat(buf2, " World!", 0);
    if (len != len2 || strcmp(buf, buf2) != 0)
        return (0);

    len = ft_strlcat(buf, " World!", 6);
    len2 = strlcat(buf2, " World!", 6);
    if (len != len2 || strcmp(buf, buf2) != 0)
        return (0);

    strcpy(buf, "Hello");
    strcpy(buf2, "Hello");

    len = ft_strlcat(buf, " World!", 5);
    len2 = strlcat(buf2, " World!", 5);
    if (len != len2 || strcmp(buf, buf2) != 0)
        return (0);

    strcpy(buf, "");
    strcpy(buf2, "");

    len = ft_strlcat(buf, " World!", 5);
    len2 = strlcat(buf2, " World!", 5);
    if (len != len2 || strcmp(buf, buf2) != 0)
        return (0);
    return (1);
}
*/

/*
** ft_atoi
*/

int	main(void)
{
	printf("1. %d\n", ft_atoi("1"));
	printf("2. %d\n", ft_atoi("123"));
	printf("3. %d\n", ft_atoi("A"));
	printf("4. %d\n", ft_atoi("123a"));
	printf("5. %d\n", ft_atoi("1 + 1"));
	printf("6. %d\n", ft_atoi(" "));
	printf("7. %d\n", ft_atoi("0123456789"));
	printf("8. %d\n", ft_atoi("1234567890"));
	printf("9. %d\n", ft_atoi("1 1"));
	printf("10. %d\n", ft_atoi("/1"));
	printf("11. %d\n", ft_atoi("1:"));

	return (0);
}
