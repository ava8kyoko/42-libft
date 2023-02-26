/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 11:24:31 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/23 12:33:34 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMÈTRES
** 	#1. L’integer à écrire.
** 	#2. Le file descriptor sur lequel écrire.
**
** VALEUR DE RETOUR
** 	None
**
** FONCTION EXTERNE AUTORISÉE
** 	write
**
** DESCRIPTION
** 	Écrit l’integer ’n’ sur le file descriptor donné.
*/

#include "libft.h"

void	ft_putnbr_fd(int number, int fd)
{
	if (number == -2147483647 - 1)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number *= -1;
	}
	if (number > 9)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd(number % 10 + '0', fd);
}
