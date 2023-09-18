#include "grupo.h"

void cargarGrupo(grupos &g){
    printf( "\n Ingrese nombre: " );
    scan(g.nombre );
    printf( "\n Ingrese apellido: " );
    scan(g.apellido);
    printf( "\n Ingrese cedula: " );
    scanf("%ld", &g.cedula);
    printf( "\n Ingrese cantidad de personas: " );
    scanf("%d", &g.cantidad);
    printf( "\n Ingrese Hora de entrada: " );
    hora_cargar(g.hora);
    printf( "\n ¿Esta afiliado? " );
    cargar(g.discriminante);
    if(g.discriminante)
        afiliado_cargar(g.datos.fechatipo);
    else
        g.datos.monto = g.cantidad * ENTRADA ;
}

void mostrarGrupo(grupos g){
    printf( "\n El nombre es: " );
    print(g.nombre);
    printf( "\n El apellido es: " );
    print(g.apellido);
    printf( "\n La cedula es: %ld", g.cedula);
    printf( "\n La cantidad de personas es de: %d", g.cantidad);
    printf( "\n La hora de entrada es: " );
    hora_mostrar(g.hora);
    printf( "\n Afiliado: " );
    mostrar(g.discriminante);
     if(g.discriminante)
        afiliado_mostrar(g.datos.fechatipo);
    else
        printf ("\n Monto a pagar: %d", g.datos.monto ) ;
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

horario R_hora (grupos g) {
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