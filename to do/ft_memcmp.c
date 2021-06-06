/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:31:46 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/06 00:25:38 by kyoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memcmp()
** 		Comparaison de zones mémoire
** 		i.e. compare les n premiers octets des zones mémoire s1 et s2.
** 			Elle renvoie un entier inférieur, égal, ou supérieur à zéro,
** 			si s1 est respectivement inférieure, égale ou supérieur à s2.
** VALEUR RENVOYÉE
** 		Renvoie un entier négatif, nul ou positif si les n premiers octets
** 			de s1 sont respectivement inférieurs, égaux ou supérieurs aux n
** 			premiers octets de s2.
** CONFORMITÉ
** 		SVr4, BSD 4.3, C89, C99, POSIX.1-2001.
*/

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (*ps1 == *ps2 && ++i < n)
	{
		ps1++;
		ps2++;
	}
	return ((int)(*ps1 - *ps2));
}

}
