/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:48:28 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/06 23:07:33 by kyoko            ###   ########.fr       */
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

void	*ft_memset(void *str, int character, size_t size_tofill)
{
	char	*new_str;

	new_str = str;
	//while (size_tofill)
	while (size_tofill--)
	{
		*new_str = (unsigned char) character;
		new_str++;
		//size_tofill--;
	}
	return (str);
}

int main() {

    int array [] = { 54, 85, 20, 63, 21 };
    size_t size = sizeof( int ) * 5;
    int length;

    /* Display the initial values */
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    /* Reset the memory bloc */
    memset( array, 0, size );

    /* Display the new values */
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );
    
    return 0;
}