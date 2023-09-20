#include "fecha.h"

boolean valida ( fecha x ) {
    boolean valida = FALSE ;
    switch ( x.mm ) {
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 :
            if ( x.dd > 0 && x.dd <= 31 )
                valida = TRUE ;
            //else 
            //    valida = FALSE ;
            break ;
        case 4 :
        case 6 :
        case 9 :
        case 11 :
            if ( x.dd > 0 && x.dd <= 30 )
                valida = TRUE ;
            //else 
            //    valida = FALSE ;
            break ;
        case 2 :
            if ( x.aa % 4 == 0 ) {
                if ( x.dd > 0 && x.dd <= 29 )
                    valida = TRUE ;
                //else 
                //    valida = FALSE ;
                break ;
            }
            else {
                if ( x.dd > 0 && x.dd <= 28 )
                    valida = TRUE ;
                //else 
                //    valida = FALSE ;
                break ;
            }
        //default :
        //    valida = FALSE ;
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
    scanf ("%d %d %d", &x.dd, &x.mm, &x.aa ) ;      // dejar como estaba si no funciona
    /*
    printf("Ingrese dia: ");
    scanf ("%d", &x.dd) ;
    fflush(stdin) ;
    printf("Ingrese mes: ");
    scanf ("%d", &x.mm) ;
    fflush(stdin) ;
    printf("Ingrese anio: ");
    scanf ("%d", &x.aa ) ; */
}

void desplegado ( fecha x ) {
    printf ("Fecha: %02d/%02d/%04d\n", x.dd, x.mm, x.aa ) ;
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

//void selectoras ( ) 