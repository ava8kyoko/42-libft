#include "libft.h"

/* autre version
{
	unsigned char	*new_dest;
	unsigned char	*new_src;
	size_t			i;

	i = 0;
	new_dest = (unsigned char *)dest;
	new_src = (unsigned char *)src;
	while (maxSize_tocopy--)
	{
		new_dest[i] = new_src[i];
		if (new_dest[i] == (unsigned char)character_tostop)
			return ((void*)(dest + i++));
		++i;
	}
	return (NULL);
}
*/

int main() {

    const char * text = "Ceci est ma première phrase. Et ceci est ma seconde";
    size_t length = strlen( text );

    // On essaye de trouver la première phrase dans le texte.
    char firstSentence[ length ];
    char * res = ft_memccpy( firstSentence, text, '.', length );

    // On affiche le resultat.
    if ( res != NULL ) {
        printf( "Une phrase entière a été trouvée.\n" );
        printf( "\t%s\n", firstSentence );
    } else {
        printf( "Aucune phrase entière trouvée.\n" );
    }

    return EXIT_SUCCESS;
}
