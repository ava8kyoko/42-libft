#include "libft.h"

int main( int argc, char * argv[] ) {

    /*
     * Doit-on afficher l'usage de la commande.
     */
    if ( argc == 1 ) {
        printf( "Usage: %s intValue ...\n", argv[0] );
        exit( EXIT_SUCCESS );
    }

    /*
     * On passe le nom de l'exécutable qui est
     * en première position dans les arguments.
     */
    argc--;   argv++;

    int sum = 0;

    /*
     * On somme toutes les valeurs passées en arguments du programme.
     * Pour ce faire on déplace le pointeur argv pour scanner tous les arguments.
     */
    while ( argc != 0 ) {

        sum += atoi( *argv++ );
        argc--;

    }

    /*
     * Et on affiche le résultat
     */
    printf( "La somme des valeurs saisies est de %d.\n", sum );

    return EXIT_SUCCESS;
}