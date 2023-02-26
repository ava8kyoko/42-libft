/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 15:01:43 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/21 14:50:57 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMÈTRES
** 	#1. Le caractère à écrire.
** 	#2. Le file descriptor sur lequel écrire.
** 		The file descriptor of where to write the output. You can either
** 		use a file descriptor obtained from the open system call, or you
** 		can use 0, 1, or 2, to refer to standard input, standard output,
** 		or standard error, respectively.
**
** VALEUR DE RETOUR
** 	None
**
** FONCTION EXTERNES AUTORISÉES
** 	write
**
** DESCRIPTION
** 	Écrit le caractère ’c’ sur le file descriptor donné.
*/

#include "libft.h"

void	ft_putchar_fd(char character, int fd)
{
	write(fd, &character, 1);
}
