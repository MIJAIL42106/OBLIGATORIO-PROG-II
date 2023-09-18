#include "tipoafiliado.h"

void afiliacion_cargar ( afiliacion &a ) {
    int i ;
    printf ("\nCargar tipo de afiliacion:\n1-Basica / 2-Media / 3-Completa\n") ;
    scanf ("%d", &i ) ;
    while ( i != 1 || i != 2 || i != 3 )
        scanf ("%d", &i ) ;
    switch ( i ) {
        case 1 :
            a = BASICA ;
            break ;
        case 2 :
            a = MEDIA ;
            break ;
        case 3 :
            a = COMPLETA ;
    }
}

void afiliacion_mostrar ( afiliacion a ) {
    switch ( a ) {
        case BASICA :
            printf ("Basica") ;
            break ;
        case MEDIA :
            printf ("Media") ;
            break ;
        case COMPLETA :
            printf ("Completa") ;
    }
}