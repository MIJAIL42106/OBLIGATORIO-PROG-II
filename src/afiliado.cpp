#include "afiliado.h"

void afiliado_cargar ( afiliado &af ) {
    afiliacion_cargar ( af.tipo ) ;
    do {
        carga ( af.f ) ;
    } while ( !valida ( R_fecha(af) ) ) ;
}

void afiliado_mostrar ( afiliado af ) {
    printf ("Datos de afiliacion: \nTipo: ") ;
    afiliacion_mostrar ( R_tipo(af) ) ;
    printf ("\n") ;
    desplegado ( R_fecha(af) ) ;
}

afiliacion R_tipo ( afiliado af ) {
    return ( af.tipo ) ;
}

fecha R_fecha ( afiliado af ) {
    return ( af.f ) ;
}