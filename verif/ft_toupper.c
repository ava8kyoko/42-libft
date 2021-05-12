/*
** DESCRIPTION
**     toupper() convertit la lettre c en majuscule si c'est pos­
**     sible.
** 
** VALEUR RENVOYÉE
**     La valeur renvoyée est celle de la  lettre  convertie,  ou
**     bien c si la conversion n'etait pas possible.
*/

#include "libft.h"

int     ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c -= 32);
    return (c);
}
