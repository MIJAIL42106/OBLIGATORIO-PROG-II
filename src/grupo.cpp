#include "grupo.h"

void cargarGrupo(grupos &g){
    printf( "\nIngrese nombre: " );
    fflush(stdin);
    scan(g.nombre);
    printf( "\nIngrese apellido: " );
    fflush(stdin);
    scan(g.apellido);
    printf( "\nIngrese cedula: " );
    fflush(stdin) ;
    scanf("%ld", &g.cedula);
    printf( "\nIngrese cantidad de personas: " );
    fflush(stdin) ;
    scanf("%d", &g.cantidad);
    printf( "\nIngrese Hora de entrada: " );
    hora_cargar(g.hora);
    printf( "\nEsta afiliado? " );
    cargar(g.discriminante);
    if(g.discriminante)
        afiliado_cargar(g.datos.fechatipo);
    else
        g.datos.monto = g.cantidad * ENTRADA ;
}

void mostrarGrupo(grupos g){
    printf( "\nEl nombre es: " );
    print(g.nombre);
    printf( "\nEl apellido es: " );
    print(g.apellido);
    printf( "\nLa cedula es: %ld", g.cedula);
    printf( "\nLa cantidad de personas es de: %d", g.cantidad);
    printf( "\nLa hora de entrada es: " );
    hora_mostrar(g.hora);
    printf( "\nAfiliado: " );
    mostrar(g.discriminante);
     if(g.discriminante)
        afiliado_mostrar(g.datos.fechatipo);
    else
        printf ("\nMonto a pagar: %d", g.datos.monto ) ;
}   

void R_nombre (grupos g, string &nombre) {
    strcop ( nombre, g.nombre ) ;
}

void R_apellido (grupos g, string &apellido) {
    strcop ( apellido, g.apellido ) ;
}

long int R_cedula (grupos g) {
    return ( g.cedula ) ;
}

int R_cantidad (grupos g) {
    return ( g.cantidad ) ;
}

horario R_horario (grupos g) {
    return ( g.hora ) ;
}

boolean R_discriminante (grupos g) {
    return ( g.discriminante ) ;
}

afiliado R_fechatipo (grupos g) {
    return ( g.datos.fechatipo ) ;
} 

int R_monto (grupos g) {
    return ( g.datos.monto ) ;
}