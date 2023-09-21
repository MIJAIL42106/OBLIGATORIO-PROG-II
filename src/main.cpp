#include <stdlib.h>         // quitar
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

    do {
        desplegarmenu1(op) ;
        printf ("\n") ;
            switch (op) {
            case 1 :
                printf ("Carga de un grupo: ") ;
                cargarGrupo(grup) ;
                if (colonia_lleno(colon))
                    printf ("\nERROR: Todas las plazas estan ocupadas.\n\n") ;
                else 
                    if (colonia_existe(colon, grup.cedula))
                        printf ("\nERROR: Ya hay un grupo cargado con esa cedula.\n\n") ;
                    else {
                        colonia_insertar(colon, grup) ;
                        printf ("\n") ;
                    }
                break ;
            case 2 :
                printf ("Ingrese cedula de grupo a registrar partida: ") ;
                fflush(stdin) ;
                scanf ("%ld", &ced) ;
                if (colonia_vacio(colon))
                    printf ("\nERROR: La colonia se encuentra vacia.\n") ;
                else 
                    if (!colonia_existe(colon, ced))
                        printf ("\nERROR: No se encontro un grupo con la cedula:  %ld", ced) ;
                    else
                        colonia_eliminar(colon, ced) ;
                printf ("\n") ;
                break ;
            case 3 :
                desplegarmenu2(op2) ;
                printf ("\n") ;
                switch (op2) {
                    case 1 :
                        // Listado de todos los grupos registrados." );
                        if (colonia_vacio(colon))
                            printf ("\nERROR: La colonia se encuentra vacia.\n\n") ;
                        else
                            colonia_desplegar(colon) ;
                        break ;
                    case 2: 
                        // Listado detallado de un grupo." );
                        printf ("Ingrese cedula de grupo a detallar: ") ;
                        fflush(stdin) ;
                        scanf ("%ld", &ced) ;
                        if (colonia_vacio(colon))
                            printf ("\nERROR: La colonia se encuentra vacia.\n") ;
                        else 
                            if (!colonia_existe(colon, ced))
                                printf ("\nERROR: No hay un grupo cargado con esa cedula.\n") ;
                            else
                                colonia_detallargrupo(colon, ced) ;
                        printf ("\n") ;
                        break ;
                    case 3 :
                        // Listado basico de grupos que ingresaron a una hora determinada." );
                        printf ("Listado basico de grupos que ingresaron a una hora determinada.\nIngrese una hora (hh): ") ;
                        fflush(stdin) ;
                        scanf("%d", &horo) ;
                        // fflush(stdin) ;
                        horara.h = horo ;
                        horara.m = 0 ;
                        if (colonia_vacio(colon))
                            printf ("\nERROR: La colonia se encuentra vacia.\n") ;
                        else 
                            if (hora_valida(horara)) {
                                colonia_gruposhora(colon, horo) ;
                                printf ("\n\n") ;
                            } else
                                printf ("\nERROR: Hora no valida.\n\n") ;
                        break ;
                    case 4 :
                        // Listado de grupos afiliados con fecha de afiliacion." );
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
                        // Total recaudado hasta el momento." );
                        printf ("Total recaudado: %ld\n\n", colonia_calculartotal(colon)) ;
                        break ;
                    case 6 :
                        // Cantidad de grupos afiliados y no afiliados." );
                        colonia_afnoaf(colon, afilia, noafilia) ;
                        printf ("La cantidad de grupos no afiliados son: %d\nLa cantidad de grupos afiliados son: %d\n\n", noafilia, afilia) ;
                        break ;
                    case 7 :
                        // Grupo con mayor cantidad de estudiante." );
                        printf ("Los datos del grupo con mayor numero de estudiante es: \n") ;
                        if (colonia_vacio(colon))
                            printf ("\nERROR: La colonia se encuentra vacia.\n\n") ;
                        else 
                            colonia_grupogrande(colon) ;
                        break ;

                    case 8 :
                        printf ("\n") ;
                        // Volver al menu principal." );
                }
        }
    } while (op != 4) ;

    system ("pause") ;      // quitar
    return 0 ;
}