#ifndef _fecha_H
#define _fecha_H

    #include "boolean.h" 
    
    typedef struct  {
        int dd ;
        int mm ;
        int aa ;
    } fecha ;
    
    boolean valida ( fecha x ) ; // bisiestos = mult 4
    void carga ( fecha &x ) ;
    void desplegado ( fecha x ) ;
    int rdd ( fecha x ) ;
    int rmm ( fecha x ) ;
    int raa ( fecha x ) ;
    
#endif