#ifndef _tipoafiliado_H
#define _tipoafiliado_H

    #include <stdio.h>

    typedef enum { BASICA, MEDIA, COMPLETA } afiliacion ;
    
    // cargar tipo de afiliacion
    void afiliacion_cargar ( afiliacion &a ) ;
    // mostrar tipo de afiliacion
    void afiliacion_mostrar ( afiliacion a ) ;

#endif