/*
** DESCRIPTION
**     La fonction bzero() met à 0 (octets contenant « \0 »)
**     les n premiers octets du bloc pointé par s.
** 
** VALEUR RENVOYÉE
**     Aucune.
*/

#include "libft.h"



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