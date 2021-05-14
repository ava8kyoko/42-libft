/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:58:17 by mchampag          #+#    #+#             */
/*   Updated: 2021/05/14 15:03:39 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** À VÉRIFIER !!!
** strlcpy()
** 	Copy a NUL terminated string into a sized buffer
** Doit copier le plus de caractères possible de la source dans
** la destination. dstsize = longueur maximale de la destination.
** Contrairement à strncpy, elle doit garantir que le terminateur soit toujours
** écrit dans la destination, autrement dit, si la source est trop longue,
** il sera en position dest[dstsize - 1], sinon la destination sera une simple copie
** de la source. Retourne la longueur de la source.
** PARAMÈTRES
** 	char *dest : Destination où copier la chaine de caractères.
** 	const char *src : Source de la chaine de caractères à copier.
** 	size_t dstsize : Nombre de caractères à copier.
** 		(size of destination buffer)
** PROCÉDURE
** 	size_t srcsize : Appelle la fonction ft_strlen pour déterminer
** 		la longueur de la source.
** 			Paramètres: destination, source et longueur source
** 	Si la longueur de la source est plus petite que la longueur de la
** 	destination,
** 		Appelle la fonction ft_strncpy pour copier la source.
** 			Paramètres: destination, source et longueur source
** 	Sinon si la longueur de la destination est différente du caractère
** 	NULL,
** 		Appelle la fonction ft_strncpy (mais l'ajuste VOIR NOTE)
** 			Paramètres: destination, source et destsize - 1
** 				(srcsize - 1 parce que: strlcpy() est similaire
** 					à strncpy(), mais elle copie au plus size - 1 octets
** 					vers dest, ajoute toujours un octet NULL final et ne
** 					complète pas la cible avec des octets NULL additionnels.)
** VALEUR RETOURNÉE
** 	Longueur de la source.
**
** https://forums.commentcamarche.net/forum/affich-34997365-ecrire-fonction-strlcpy
** https://linux.die.net/man/3/strlcpy
** https://man.archlinux.org/man/strcpy.3.fr
*/

#include "libft.h"

static char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srcsize;

	srcsize = ft_strlen(src);
	if (srcsize < dstsize)
		ft_strncpy(dest, src, srcsize);
	else if (dstsize != 0)
	{
		ft_strncpy(dest, src, dstsize - 1);
		dest[dstsize - 1] = '\0';
	}
	return (srcsize);
}

char		*ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
** Fonction extra
*/

/*
strcpy(), strncpy()
	Copier une chaîne
strncpy()
	La fonction strcpy() copie la chaîne pointée par src, y compris le caractère nul (« \0 »)
       final dans la chaîne pointée par dest. Les deux chaînes ne doivent pas se  chevaucher.  La
       chaîne dest doit être assez grande pour accueillir la copie. Attention aux dépassements de
       tampon ! (consultez BUGS).

       La fonction strncpy() est identique,  sauf  qu'au  plus  n  octets  de  src  sont  copiés.
       Attention :  s'il  n'y a pas de caractère nul dans les n premiers octets de src, la chaîne
       résultante dans dest ne disposera pas de caractère nul final.

       Si  la  longueur  de  src  est  inférieure  à  n,  strncpy()  écrit  des  caractères  nuls
       supplémentaires vers dest pour s'assurer qu'un total de n octets ont été écrits.

PARAMÈTRES
	char *dest : Chaine de caractères de la destination.
	const char *src : Chaine de caractères de la source.
	size_t n : Le nombre d'octets de la src à copier.
PROCÉDURE
	Tant que le compteur est plus petit que la taille à copier,
	et que la valeur de la source est différente du caractère NULL,
		la valeur de la destination devient la même que la source
		et la compteur est incrémenté.
	Tant que le compteur est plus petit que la taille de à copier,
		la valeur de la destination devient un caractère NULL,
		et le compteur est incrémenté.
VALEUR RENVOYÉE
	Un pointeur sur la chaîne destination dest.

http://manpages.ubuntu.com/manpages/bionic/fr/man3/strcpy.3.html
https://man.archlinux.org/man/strcpy.3.fr
*/






/*
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (size > 0)
	{
		while (--size && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
*/



