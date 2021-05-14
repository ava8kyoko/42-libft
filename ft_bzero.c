/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:58:20 by mchampag          #+#    #+#             */
/*   Updated: 2021/05/14 00:53:32 by kyoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** bzero()
** 		Écrire des octets de valeur zéro dans un bloc d'octets.
** 		i.e. met à 0 (octets contenant « \0 ») les n premiers octets du bloc
** 			pointé par s.
** VALEUR RENVOYÉE
** 		Aucune
** PROBLÈMES
** 		Fonction déconseillée. Utilisez memset dans les nouveaux programmes.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}



/*

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*buffer;
	size_t			i;

	buffer = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		buffer[i] = 0;
		i++;
	}
}



#include "libft.h"

void				ft_bzero(void *b, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = b;
	i = 0;
	while (i++ < n)
		*dest++ = 0;
}




#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	if (n == 0)
		return ;
	i = 0;
	str = (char *)s;
	while (i < n)
		str[i++] = 0;
	return ;
}

*/
