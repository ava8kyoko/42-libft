/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:26:33 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/06 00:13:35 by kyoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memchr()
** 	Recherche la première occurence d'une valeur typée int, mais interprétée 
**	en tant que char, dans un bloc de mémoire. Comme on traite un bloc de 
**	mémoire et non pas une chaîne de caractères AZT (à zéro terminal), nous 
**	devons aussi spécifier à la fonction la taille du bloc de mémoire dans 
**	lequel réaliser la recherche.
** PARAMÈTRES
**	memoryBlock : un pointeur indiquant l'adresse du bloc mémoire à utiliser 
**					pour la recherche.
**	searchedChar : le code numérique de l'octet à rechercher dans le bloc.
**	size : indique la taille du bloc de mémoire dans lequel opérer 
**			la recherche.
** VALEUR RENVOYÉE
** 	Renvoit un pointeur sur l'octet correspondant (première occurence), 
**	ou NULL si le caractère n'est pas présent dans la zone de mémoire 
**	concernée.
*/

#include "libft.h"

void	*ft_memchr(const void *ptr, int char_tosearch, size_t size)
{
	unsigned char *new_ptr;

	new_ptr = (unsigned char*)ptr;
	while (size--)
	{
		if (*new_ptr == (unsigned char)char_tosearch)
			return (new_ptr);
		new_ptr++;
	}
	return (NULL);
}

int main() 
{

    char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    const unsigned int size = 10;

    // On recherche une valeur inhéxistante :
    void * found = ft_memchr( data, 57, size );
    printf( "57 is %s\n", ( found != NULL ? "found" : "not found" ) );

    // On recherche une valeur existante :
    found = ft_memchr( data, 50, size );
    printf( "50 is %s\n", ( found != NULL ? "found" : "not found" ) );
    if ( found != NULL ) {
        printf( "La valeur à la position calculée est %d\n", *((char *) found) );
    }

    return EXIT_SUCCESS;
}
