/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:25:00 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/04 15:35:39 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** atoi()
** 	Convertir une chaîne de caractères (48 à 57) en entier
** VALEUR RENVOYÉE
** 	Le résultat de la conversion ou 0 si invalide.
** \a : appel (cloche) '7'
** \b : retour arrière '8'
** \t : tabulation horizontale '9'
** \n : saut de ligne '10'
** \v : tabulation verticale '11'
** \f : changement de page '12'
** \r : retour chariot '13'
** \e ou ' ' : expace '27'
*/

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	sign;
	int	converted;

	sign = 1;
	converted = 0;
	while ((*str >= 7 && 13 >= *str) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		converted *= 10;
		converted += *str++ - '0';
	}
	return (sign * converted);
}

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
	printf("12. %d\n", ft_atoi("2147483647"));
	printf("13. %d\n", ft_atoi("-2147483648"));



	return (0);
}
