/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:48:28 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/05 23:47:22 by kyoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memset()
** Remplit les n premiers octets de la zone mémoire pointée par s
** 		avec l'octet c.
** PARAMÈTRES
**	pointer: permet de spécifier l'adresse du bloc mémoire à ré-initialiser.
**	valeur: indique la valeur à utiliser pour remplir le bloc de mémoire.
**	taille: indique le nombre d'octets à initialiser.
** VALEUR RENVOYÉE
** 	Après exécution de la fonction, l'adresse de la mémoire ré-initialisée 
**	sera retournée (autrement dit la valeur du paramètre pointer).
**
** https://koor.fr/C/cstring/memset.wp
*/

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t size_tofill)
{
	char	*new_ptr;

	new_ptr = ptr;
	while (size_tofill)
	{
		*new_ptr = (unsigned char) value;
		new_ptr++;
		size_tofill--;
	}
	return (ptr);
}
