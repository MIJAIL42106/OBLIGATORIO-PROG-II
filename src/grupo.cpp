#include "grupo.h"

void cargarGrupo(grupos &g){
    printf("\nIngrese nombre: ");
    fflush(stdin);
    scan(g.nombre);
    printf("Ingrese apellido: ");
    fflush(stdin);
    scan(g.apellido);
    printf("Ingrese cedula: ");
    fflush(stdin) ;
    scanf("%ld", &g.cedula);
    printf("Ingrese cantidad de personas: ");
    fflush(stdin) ;
    scanf("%d", &g.cantidad);
    printf("Ingrese Hora de entrada: ");
    do {
        hora_cargar(g.hora);
        if ( !hora_valida (g.hora) ) 
            printf("ERROR: Ingrese hora valida.\n") ;
    } while ( !hora_valida (g.hora) );
    printf( "Esta afiliado? " );
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
        printf ("Monto a pagar: %d", g.datos.monto ) ;
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