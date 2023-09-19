#include "horario.h"

boolean hora_valida ( horario h ) {
    boolean valida = FALSE ;
    if ( h.h >= 0 && h.h <= 24 && h.m >= 0 && h.m < 60 )    
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
    printf ("%02d:%02d", h.h, h.m ) ;
}

int R_hora ( horario h ) {
    return ( h.h ) ;
}

int R_min ( horario h ) {
    return ( h.m ) ;
}