/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:16:10 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/18 15:00:32 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMÈTRES
** 	#1. l’integer à convertir.
**
** VALEUR DE RETOUR
** 	La chaine de caractères représentant l’integer.
** 	NULL si l’allocation échoue.
**
** FONCTIONS EXTERNES AUTORISÉES
** malloc
**
** DESCRIPTION
** 	Alloue (avec malloc(3)) et retourne une chaine de
** 	caractères représentant l’integer reçu en argument.
** 	Les nombres négatifs doivent être gérés.
*/

#include "libft.h"

int		size_number(number)
{
	int i;

	i = 0;
	if (number == 0)
		return (1);
	if (number < 0)
	{
		number *= -1;
		i++;
	}
	while (number > 0)
	{
		number /= 10;
		i++;
	}
	return (i);
}

char	*converted_number(char *str, int number, int size)
{
	str[size] = '\0';
	if (number == 0)
		str[0] = '0';
	if (number < 0)
	{
		str[0] = '-';
		number *= -1;
	}
	while (number > 0 && size--)
	{
		str[size] = '0' + (number % 10);
		number /= 10;
	}
	return (str);
}

char	*ft_itoa(int number)
{
	char	*str;
	int		size;

	if (number <= -2147483647 -1)
	{
		str = malloc(sizeof(char) * 12);
		ft_memcpy(str, "-2147483648", 12);
		return (str);
	}
	size = size_number(number);
	if (!(str = malloc(sizeof(char) * size + 1)))
		return (NULL);
	return (converted_number(str, number, size));
}

// int main(int argc, char **argv)
// {
//   printf("Main de test : ft_itoa\n");
//   printf("Test parametres basiques (Entier positif)\n");
//   printf("%s\n\n", ft_itoa(2543));

//   printf("(Entier negatif)\n");
//   printf("%s\n\n", ft_itoa(-254));

//   printf("(Entier = 0)\n");
//   printf("%s\n\n", ft_itoa(0));

// 	printf("(Entier = -2147483648)\n");
// 	printf("%s\n\n", ft_itoa(-2147483648));
//   return (0);
// }
