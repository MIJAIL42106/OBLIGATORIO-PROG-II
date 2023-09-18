#include "boolean.h"

void cargar ( boolean &b ) {
    int valor ;
    printf ("Ingrese 0 si es falso y 1 si es verdadero: ") ;
    fflush(stdin) ;
    scanf ("%d", &valor ) ;
    if ( valor == 0 )
        b = FALSE ;
    else 
        b = TRUE ;
} 

void mostrar ( boolean b ) {
    if (b)
        printf ("verdadero\n") ;
    else
        printf ("falso\n") ;
}