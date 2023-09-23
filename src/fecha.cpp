#include "fecha.h"

boolean valida ( fecha x ) {
    boolean valida = FALSE ;
    switch ( rmm(x) ) {
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 :
            if ( rdd(x) > 0 && rdd(x) <= 31 )
                valida = TRUE ;
            break ;
        case 4 :
        case 6 :
        case 9 :
        case 11 :
            if ( rdd(x) > 0 && rdd(x) <= 30 )
                valida = TRUE ;
            break ;
        case 2 :
            if ( raa(x) % 4 == 0 ) {
                if ( rdd(x) > 0 && rdd(x) <= 29 )
                    valida = TRUE ;
                break ;
            }
            else {
                if ( rdd(x) > 0 && rdd(x) <= 28 )
                    valida = TRUE ;
                break ;
            }
    }
    return ( valida ) ;
}

boolean fecha_iguales ( fecha x, fecha y ) {
    boolean iguales = FALSE ;
    if ( raa( x ) == raa( y ) && rdd( x ) == rdd( y ) && rmm( x ) == rmm( y ) )
        iguales = TRUE ;    
    return ( iguales ) ;
}

void carga ( fecha &x ) {
    printf ("Ingrese Fecha (dd mm aa): ") ;
    fflush(stdin) ;
    scanf ("%d %d %d", &x.dd, &x.mm, &x.aa ) ;
}

void desplegado ( fecha x ) {
    printf ("Fecha: %02d/%02d/%04d\n", rdd(x), rmm(x), raa(x) ) ;
}

int rdd ( fecha x ) {
    return ( x.dd ) ;
}
int rmm ( fecha x ) {
    return ( x.mm ) ;
}
int raa ( fecha x ) {
    return ( x.aa ) ;
}