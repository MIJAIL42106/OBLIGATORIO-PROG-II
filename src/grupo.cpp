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
        if ( !hora_valida (R_horario(g)) ) 
            printf("ERROR: Ingrese hora valida.\n") ;
    } while ( !hora_valida (R_horario(g)) );
    printf( "Esta afiliado? " );
    cargar( g.discriminante );
    if(R_discriminante(g))
        afiliado_cargar(g.datos.fechatipo);
    else
        g.datos.monto = g.cantidad * ENTRADA ;
}

void mostrarGrupo(grupos g) {
    string s ;
    printf( "\nEl nombre es: " );
    R_nombre(g, s);
    print(s);
    printf( "\nEl apellido es: " );
    R_apellido(g, s);
    print(s);
    printf( "\nLa cedula es: %ld", R_cedula(g));
    printf( "\nLa cantidad de personas es de: %d", R_cantidad(g));
    printf( "\nLa hora de entrada es: " );
    hora_mostrar(R_horario(g));
    printf( "\nAfiliado: " );
    mostrar(R_discriminante(g));
    if(R_discriminante(g))
        afiliado_mostrar(R_fechatipo(g));
    else
        printf ("Monto a pagar: %d", R_monto(g));
    printf("\n");
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