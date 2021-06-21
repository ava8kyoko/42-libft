/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 10:55:14 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/21 11:23:17 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMÈTRES
** 	#1. La chaine de caractères à écrire.
** 	#2. Le file descriptor sur lequel écrire.
**
** VALEUR DE RETOUR
** 	None
**
** FONCTION EXTERNE AUTORISÉE
** 	write
**
** DESCRIPTION
** 	Écrit La chaine de caractères ’s’ sur le file
** 	descriptor donné, suivie d’un retour à la ligne.
*/

#include "libft.h"

void 	ft_putendl_fd(char *str, int fd)
{
	if (!str)
		return ;
	ft_putstr_fd(str, fd);
	ft_putchar_fd('\n', fd);
}
