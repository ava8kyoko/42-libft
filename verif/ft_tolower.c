/*
** DESCRIPTION
**     tolower() convertit la lettre c en minuscule si c'est pos­
**     sible.
** 
** VALEUR RENVOYÉE
**     La valeur renvoyée est celle de la  lettre  convertie,  ou
**     bien c si la conversion n'etait pas possible.
*/

#include "libft.h"

int     ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c += 32);
    return (c);
}
