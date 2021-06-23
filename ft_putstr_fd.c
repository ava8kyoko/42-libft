/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 15:34:38 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/23 12:30:48 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMÈTRES
** 	#1. Le caractère à écrire.
** 	#2. Le file descriptor sur lequel écrire.
**
** VALEUR DE RETOUR
** 	None
**
** FONCTION EXTERNE AUTORISÉE
** write
**
** DESCRIPTION
** 	Écrit le caractère ’c’ sur le file descriptor donné.
*/

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	if (!str)
		return ;
	write(fd, str, ft_strlen(str));
}
