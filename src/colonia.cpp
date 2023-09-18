#include "colonia.h"


boolean colonia_lleno (colonia c){
    boolean lleno = FALSE ;
        if ( c.tope == TAM )
            lleno = TRUE ;
    return ( lleno ) ;
}

boolean colonia_vacio ( colonia c ){
    boolean vacio = FALSE ;
        if ( c.tope == 0 )
            vacio = TRUE ;
    return ( vacio ) ;
}

void colonia_inicializar ( colonia &c ){
    c.tope = 0;
}



boolean colonia_existe ( colonia c, long int cedula ) {
    boolean existe = FALSE;
    int i = 0;
    while (i < c.tope && !existe)
        if(c.arre[i].cedula == cedula)
            existe = TRUE;
        else
            i++;
    return(existe);
}

void colonia_insertar ( colonia &c, grupos g ) {
    c.arre[c.tope] = g ;
    c.tope++ ;
}

void colonia_eliminar ( colonia &c, long int cedula ) {
    int i = 0 ;        
    while ( c.arre[i].cedula == cedula )
        i++ ;
    c.tope-- ;
    for ( ; i< c.tope; i++ ) 
        c.arre[i] = c.arre[i+1] ;
}

void colonia_desplegar ( colonia c ) {
    int i; 
    string s;
    for( i = 0; i < c.tope; i++){
        printf( "Cedula: %ld \nNombre: ", R_cedula (c.arre[i] ) );
        R_nombre (c.arre[i], s );
        print( s );
        printf("\nApellido: ");
        R_apellido( c.arre[i], s );
        print( s );
        printf("\nCantidad de esdtudaintes: %d \n", R_cantidad(c.arre[i] ) );
        hora_mostrar(R_horario(c.arre[i]));
        printf("\n\n");
    }
}

void colonia_detallargrupo ( colonia c, long int cedula ) {
    int i = 0 ;        
    while ( c.arre[i].cedula != cedula && i<c.tope ) 
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
        if ( fecha_iguales ( R_fecha ( R_fechatipo ( c.arre[i] ) ), f ) && c.arre[i].discriminante) { 
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

long int colonia_calculartotal ( colonia c ) {
    int i ;
    long int total = 0 ;
    for ( i=0; i<c.tope; i++ )
        if ( !c.arre[i].discriminante )
            total += c.arre[i].datos.monto ;
    return ( total ) ;
}

void colonia_afnoaf (colonia c, int &af, int &noaf ) {
    int i ;
    af=0; noaf=0;
    for ( i=0; i<c.tope; i++ )
        if (c.arre[i].discriminante)
            af++;
        else 
            noaf++;    
}

void colonia_grupogrande (colonia c) {
    int i, max=0, imax ;
    for ( i=0; i<c.tope; i++ )
        if ( c.arre[i].cantidad > max ) {
            max = c.arre[i].cantidad ;
            imax = i ;
        }
    colonia_detallargrupo ( c, c.arre[imax].cedula ) ;
}