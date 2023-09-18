#ifndef _grupo_H
#define _grupo_H

    #include "string.h"
    #include "afiliado.h"
    #include "horario.h"

    const int ENTRADA = 500 ;
    typedef struct {
        string nombre ;
        string apellido ;
        long int cedula ;
        int cantidad ;
        horario hora ;
        boolean discriminante ; // grupo está o no afiliado a la colonia
        union {
            afiliado fechatipo ; // afiliado, se registrará la fecha de afiliación y el tipo de afiliación
            int monto ; // no afiliado, se cobrará una entrada de $500 a cada estudiante y se registrará el monto abonado
        } datos ;
    } grupos ;

    void cargarGrupo(grupos &g);
    void mostrarGrupo(grupos g);
    void R_nombre (grupos g, string &nombre) ;
    void R_apellido (grupos g, string &apellido) ;
    long int R_cedula (grupos g) ;
    int R_cantidad (grupos g) ;
    horario R_horario (grupos g) ;
    boolean R_discriminante (grupos g) ; 
    afiliado R_fechatipo (grupos g) ; 
    int R_monto (grupos g) ; 


#endif