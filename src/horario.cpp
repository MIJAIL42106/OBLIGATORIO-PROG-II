#include "horario.h"

boolean hora_valida ( horario h ) {
    boolean valida = FALSE ;
    if ( R_hora(h) >= 0 && R_hora(h) < 24 && R_min(h) >= 0 && R_min(h) < 60 )    
        valida = TRUE ;
    return ( valida ) ;
}

void hora_cargar ( horario &h ) {
    fflush(stdin);
    printf ("\nIngrese Hora: ") ;
    fflush(stdin);
    scanf ("%d", &h.h ) ;
    printf ("Ingrese Minutos: ") ;
    fflush(stdin);
    scanf ("%d", &h.m ) ;
    
}

void hora_mostrar ( horario h ) {
    printf ("%02d:%02d", R_hora(h), R_min(h) ) ;
}

int R_hora ( horario h ) {
    return ( h.h ) ;
}

int R_min ( horario h ) {
    return ( h.m ) ;
}