#ifndef _afiliado_H
#define _afiliado_H

    #include "fecha.h"
    #include "tipoafiliado.h"

    typedef struct {
        afiliacion tipo ;
        fecha f ;
    } afiliado ;

    // cargar tipo y fecha de afiliacion
    void afiliado_cargar ( afiliado &af ) ;
    // desplegar tipo y fecha de afiliacion
    void afiliado_mostrar ( afiliado af ) ;
    // retorna ripo de afiliacion
    afiliacion R_tipo ( afiliado af ) ;
    // retorna fecha de afiliacion 
    fecha R_fecha ( afiliado af ) ;

#endif