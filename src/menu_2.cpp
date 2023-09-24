#include "menu_2.h"

    void desplegarmenu2( int &a ){
        printf ("1 - Listado de todos los grupos registrados." );
        printf ("\n2 - Listado detallado de un grupo." );
        printf ("\n3 - Listado basico de grupos que ingresaron a una hora determinada." );
        printf ("\n4 - Listado de grupos afiliados con fecha de afiliacion." );
        printf ("\n5 - Total recaudado hasta el momento." );
        printf ("\n6 - Cantidad de grupos afiliados y no afiliados." );
        printf ("\n7 - Grupo con mayor cantidad de estudiantes." );
        printf ("\n8 - Volver al menu principal." );
        printf ("\nIngrese una opcion: " );
        fflush (stdin) ;
        scanf ("%d", &a );
    }
