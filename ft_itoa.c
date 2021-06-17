/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:16:10 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/17 15:34:41 by mchampag         ###   ########.fr       */
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

char *converted_number(int number, int size)
{
	if (number == 0)
		return ("0");
	if (number < 0 && --size)
	{
		str[0] = '-';
		number *= -1;
	}
	while (number > 0 && --size)
	{
		str[size] = '0' + (number % 10);
		number /= 10;
	}
	str[size--] = '\0';
}

char	*ft_itoa(int number)
{
	int size;
	

	size = size_number(number) + 1;
	if (!(str = malloc(sizeof(char) * size)))
		return (NULL);
	return (converted_number(number, size));
}

int main(int argc, char **argv)
{
  printf("Main de test : ft_itoa\n");
  printf("Test parametres basiques (Entier positif)\n");
  printf("%s\n\n", ft_itoa(2543));

  printf("(Entier negatif)\n");
  printf("%s\n\n", ft_itoa(-254));

  printf("(Entier = 0)\n");
  printf("%s\n\n", ft_itoa(0));

  return (0);
}

/*
int main(void)
{
	printf("%s",ft_itoa(-1234567890));

	return (0);
}
*/
