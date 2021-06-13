

/*
** PARAMÈTRES
** 	#1. l’integer à convertir.
** 
** VALEUR DE RETOUR
** 	La chaine de caractères représentant l’integer.
** 	NULL si l’allocation échoue.
** 
** FOCNTIONS EXTERNES AUTORISÉES
** malloc
** 
** DESCRIPTION
** 	Alloue (avec malloc(3)) et retourne une chaine de
** 	caractères représentant l’integer reçu en argument.
** 	Les nombres négatifs doivent être gérés.
*/

#include "libft.h"

char	*ft_itoa(int character)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	if (character == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (character < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-character));
	}
	else if (character >= 10)
		str = ft_strjoin(ft_itoa(character / 10), ft_itoa(character % 10));
	else if (character < 10 && character >= 0)
	{
		str[0] = character + '0';
		str[1] = '\0';
	}
	return (str);
}