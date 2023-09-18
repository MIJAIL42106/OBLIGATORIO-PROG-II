#include <stdlib.h> 
#include "colonia.h"
#include "menu_1.h"
#include "menu_2.h"

int main () {
    int op, op2 ;

    do {
        desplegarmenu1 ( op ) ;
        switch ( op ) {
            case 1 :

                break ;
            case 2 :

                break ;
            case 3 :
                desplegarmenu2 ( op2 ) ;
                switch ( op2 ) {
                    case 1 :

                        break ;
                    case 2 :

                        break ;
                    case 3 :
                    
                        break ;
                    case 4 :

                        break ;
                    case 5 :

                        break ;
                    case 6 :

                        break ;
                    case 7 :

                        break ;
                    case 8 : ;
                    
                }
        }
    } while ( op != 4 ) ;

    system ("pause") ;
    return 0 ;
}