/*
** FONCTION strchr()
**     Rechercher un caractère dans un chaîne.
**     Renvoie un pointeur sur la première occurrence
**     du caractère c dans la chaîne s.
** 
** VALEUR RENVOYÉE
**     Un pointeur sur le caractère correspondant, ou
**     NULL si le caractère n'a pas été trouvé.
*/

#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    while (*str != c)
    {
        if (*str == '\0')
            return (0);
        str++;
    }
    return ((char*)str); // ou char* str ou char str[] ???
}

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (NULL);
}


char	*ft_strchr(const char *s, int c)
{
	size_t	search_area;

	search_area = ft_strlen(s) + 1;
	return ((char *)ft_memchr(s, c, search_area));
}
