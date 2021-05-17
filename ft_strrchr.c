/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:44:48 by mchampag          #+#    #+#             */
/*   Updated: 2021/05/17 13:25:48 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strrchr()
** 	Rechercher un caractère dans une chaîne
** 	i.e. renvoie un pointeur sur la dernière occurrence du caractère c
** 		dans la chaîne s.
** 		Pour ces fonctions, « caractère » signifie « octet » ;
** 		elles ne marchent pas avec des caractères larges ou multi-octets.
** VALEUR RENVOYÉE
** 	Un pointeur sur le caractère correspondant, ou NULL si le caractère
** 		n'a pas été trouvé.
** CONFORMITÉ
** 	SVr4, BSD 4.3, C89 et C99
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    size_t len;

    len = ft_strlen(s);
    while (len--)
        if (*(len + s) == c)
            return((char *)(len + s));
    return (NULL);
}

/*
int     main(void)
{
    printf("%s\n", ft_strrchr("banane", 'a'));
    printf("%s\n", ft_strrchr("banane", '0'));
    return (0);
}
*/








/*
char *ft_strrchr(const char *s, int c)
{
  const char *found;
  const char *p;

  c = (size_t) c;

  if (c == '\0')
    return ft_strchr(s, '\0');
  found = NULL;
  while ((p = ft_strchr(s, c)) != NULL)
    {
      found = p;
      s = p + 1;
    }
  return ((char *) found);
}
*/

