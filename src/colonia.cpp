#include "colonia.h"

void colonia_inicializar ( colonia &c ){
    c.tope = 0;
}

boolean colonia_existe ( colonia c, long int cedula ) {
    boolean existe = FALSE;
    int i = 0;
    do{
        if(c.arre[i].cedula == cedula){
            existe = TRUE;
        } else
            i++;
    }while(i < c.tope && !existe);
    return(existe);
}

void colonia_insertar ( colonia &c, grupos g ) {
    c.arre[c.tope] = g ;
}

void colonia_eliminar ( colonia &c, long int cedula ) {
    int i = 0 ;        
    while ( c.arre[i].cedula == cedula ) ;
        i++ ;
    c.tope-- ;
    for ( ; i< c.tope; i++ ) 
        c.arre[i] = c.arre[i+1] ;
}

void colonia_desplegar ( colonia c ) {
    int i; 
    string s;
    for( i = 0; i < c.tope; i++){
        printf( "Cedula: %ld ", R_cedula (c.arre[i] ) );
        R_nombre (c.arre[i], s );
        print( s );
        printf("\n");
        R_apellido( c.arre[i], s );
        print( s );
        printf("\n");
        printf("\n Cantidad de esdtudaintes: %d \n", R_cantidad(c.arre[i] ) );
        hora_mostrar(R_horario(c.arre[i]));
        printf("\n");
    }
}

void colonia_detallargrupo ( colonia c, long int cedula ) {
    int i = 0 ;        
    while ( c.arre[i].cedula == cedula ) ;
        i++ ;
    mostrarGrupo ( c.arre[i] ) ;
}

void colonia_gruposhora ( colonia c, int h ) {
    int i ;
    string s ;
    for ( i=0; i<c.tope; i++ )
        if ( R_hora ( c.arre[i].hora ) == h ) {
            printf ("Cedula: %ld\nNombre: ", R_cedula ( c.arre[i] ) ) ;
            R_nombre ( c.arre[i], s ) ;
            print ( s ) ;
            printf ("\nApellido: ") ;
            R_apellido ( c.arre[i], s ) ;
            print ( s ) ;
            printf ("\nEstudiantes: %d\nHora: ", R_cantidad ( c.arre[i] ) ) ;
            hora_mostrar ( R_horario ( c.arre[i] ) ) ;
        }
}

void colonia_gruposfecha ( colonia c, fecha f ) {
    int i ;
    string s ;
    for ( i=0; i<c.tope; i++ )
        if ( R_fecha ( c.arre[i] ) == f  && c.arre[i].discriminante) { 
            printf ("Cedula: %ld\nNombre: ", R_cedula ( c.arre[i] ) ) ;
            R_nombre ( c.arre[i], s ) ;
            print ( s ) ;
            printf ("\nApellido: ") ;
            R_apellido ( c.arre[i], s ) ;
            print ( s ) ;
            printf ("\nEstudiantes: %d\nHora: ", R_cantidad ( c.arre[i] ) ) ;
            hora_mostrar ( R_horario ( c.arre[i] ) ) ;
        }
}

void colonia_calculartotal ( colonia c ) {

}

void colonia_afnoaf (colonia c, int &af, int &noaf ) {

}

void colonia_grupogrande (colonia c) {

}

