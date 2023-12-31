#include "afiliado.h"

void afiliado_cargar ( afiliado &af ) {
    afiliacion_cargar ( af.tipo ) ;
    do {
        carga ( af.f ) ;
    } while ( valida ( af.f) ) ;
}

void afiliado_mostrar ( afiliado af ) {
    printf ("Datos de afiliacion: \n") ;
    afiliacion_mostrar ( af.tipo ) ;
    desplegado ( af.f ) ;
}

afiliacion R_tipo ( afiliado af ) {
    return ( af.tipo ) ;
}

fecha R_fecha ( afiliado af ) {
    return ( af.f ) ;
}