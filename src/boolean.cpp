#include "boolean.h"

void cargar ( boolean &b ) {
    int valor ;
    printf ("Ingrese 0 si es falso y 1 si es verdadero: ") ;
    fflush(stdin) ;
    scanf ("%d", &valor ) ;
    switch ( valor ) {          // if else y hacemos un do while hasta que se ingrese 0 o 1 asi se repite en caso de darle a otro valor
        case 0 :
            b = FALSE ;
            break ;
        case 1 :
            b = TRUE ;
            break ;
        default : 
            b = TRUE ;
            printf ("\nATENCION: Valor fuera de rango, seteado en verdadero por predeterminado.\n") ;
    }
} 

void mostrar ( boolean b ) {
    if (b)
        printf ("verdadero\n") ;
    else
        printf ("falso\n") ;
}