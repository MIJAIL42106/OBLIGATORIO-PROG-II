#ifndef _horario_H
#define _horario_H

    #include "boolean.h"

    typedef struct {
        int h;
        int m;
    } horario ;

    // comprobar si hora es valida
    boolean hora_valida ( horario h ) ;
    // cargar hora
    void hora_cargar ( horario &h ) ;
    // mostrar hora
    void hora_mostrar ( horario h ) ;
    // retorna h ( horas )
    int R_hora ( horario h ) ;
    // retorna m ( minutos )
    int R_min ( horario h ) ;
    
#endif