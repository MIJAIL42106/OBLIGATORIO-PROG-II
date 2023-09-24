#include <stdlib.h>
#include "colonia.h"
#include "menu_1.h"
#include "menu_2.h"

int main() {
    int op, op2, horo, noafilia, afilia ;
    long int ced ;
    colonia colon ;
    grupos grup ;
    horario horara ;
    fecha fec ;

    colonia_inicializar ( colon ) ;

    do {
        desplegarmenu1(op) ;
        printf ("\n") ;
            switch (op) {
            case 1 :
                if (colonia_lleno(colon))
                    printf ("ERROR: Todas las plazas estan ocupadas.\n") ;
                else {
                    printf ("Carga de un grupo: ") ;
                    cargarGrupo(grup) ;
                    if (colonia_existe(colon, R_cedula(grup)))
                        printf ("ERROR: Ya hay un grupo cargado con esa cedula.\n") ;
                    else
                        colonia_insertar(colon, grup) ;
                }
                printf ("\n") ;    
                break ;
            case 2 :
                if (colonia_vacio(colon))
                    printf ("ERROR: La colonia se encuentra vacia.\n") ;
                else {
                    printf ("Ingrese cedula de grupo a registrar partida: ") ;
                    fflush(stdin) ;
                    scanf ("%ld", &ced) ;
                    if (!colonia_existe(colon, ced))
                        printf ("\nERROR: No se encontro un grupo con la cedula:  %ld", ced) ;
                    else
                        colonia_eliminar(colon, ced) ;
                }
                printf ("\n") ;
                break ;
            case 3 :
                desplegarmenu2(op2) ;
                printf ("\n") ;
                switch (op2) {
                    case 1 :
                        if (colonia_vacio(colon))
                            printf ("ERROR: La colonia se encuentra vacia.\n\n") ;
                        else
                            colonia_desplegar(colon) ;
                        break ;
                    case 2: 
                        if (colonia_vacio(colon))
                            printf ("ERROR: La colonia se encuentra vacia.\n\n") ;
                        else {
                            printf ("Ingrese cedula de grupo a detallar: ") ;
                            fflush(stdin) ;
                            scanf ("%ld", &ced) ;
                            if (!colonia_existe(colon, ced))
                                printf ("\nERROR: No hay un grupo cargado con esa cedula.\n\n") ;
                            else
                                colonia_detallargrupo(colon, ced) ;
                        }
                        break ;
                    case 3 :
                        if (colonia_vacio(colon))
                            printf ("ERROR: La colonia se encuentra vacia.\n") ;
                        else {
                            printf ("Listado basico de grupos que ingresaron a una hora determinada.\nIngrese una hora (hh): ") ;
                            fflush(stdin) ;
                            scanf("%d", &horo) ;
                            horara.h = horo ;
                            horara.m = 0 ;
                            if (hora_valida(horara)) {
                                colonia_gruposhora(colon, horo) ;
                                printf ("\n\n") ;
                            } else
                                printf ("\nERROR: Hora no valida.\n\n") ;
                        }
                        break ;
                    case 4 :
                        printf ("Listado de grupos afiliados con fecha de afiliacion.\n") ;
                        do {
                            carga(fec) ;
                            if (!valida(fec))
                                printf ("\nERROR: Ha ingresado una fecha invalida.\nVuelva a ingresar:\n") ;
                        } while (!valida(fec)) ;
                        colonia_gruposfecha(colon, fec) ;
                        printf ("\n\n") ;
                        break ;
                    case 5 :
                        printf ("Total recaudado: %ld\n\n", colonia_calculartotal(colon)) ;
                        break ;
                    case 6 :
                        colonia_afnoaf(colon, afilia, noafilia) ;
                        printf ("La cantidad de grupos no afiliados son: %d\nLa cantidad de grupos afiliados son: %d\n\n", noafilia, afilia) ;
                        break ;
                    case 7 :
                        if (colonia_vacio(colon))
                            printf ("ERROR: La colonia se encuentra vacia.\n") ;
                        else {
                            printf ("Los datos del grupo con mayor numero de estudiantes es: \n") ; 
                            mostrarGrupo ( colonia_grupogrande(colon) ) ; 
                        }
                        printf ("\n") ; 
                }
        }
    } while (op != 4) ;

    system ("pause") ;      // quitar
    return 0 ;
}