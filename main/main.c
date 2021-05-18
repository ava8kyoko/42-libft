/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 21:37:52 by kyoko             #+#    #+#             */
/*   Updated: 2021/05/17 23:29:28 by kyoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
