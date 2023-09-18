#ifndef _colonia_H
#define _colonia_H

    #include "grupo.h"

    const int TAM = 3 ;
    typedef struct {
        grupos arre[TAM] ;
        int tope ;
    } colonia ;

    // devuelve TRUE si c.tope = TAM
    boolean colonia_lleno ( colonia c ) ; 
    // devuelve TRUE si c.tope = 0
    boolean colonia_vacio ( colonia c ) ;

    // Inicializar tope
    void colonia_inicializar ( colonia &c ) ;
    // Dada la cédula de un docente, determinar si existe algún grupo actualmente registrado con dicha cédula.
    boolean colonia_existe ( colonia c, long int cedula ) ;
    // Insertar un nuevo grupo no registrado actualmente.
    void colonia_insertar ( colonia &c, grupos g ) ;
    // Dada la cédula del docente a cargo de un grupo, registrar su partida, eliminándolo del sistema. Los restantes grupos deben permanecer almacenados en el orden que están.
    void colonia_eliminar ( colonia &c, long int cedula ) ;
    // Listar por pantalla cédula, nombre y apellido del docente, cantidad de estudiantes y hora de entrada (hh:mm) de todos los grupos registrados actualmente en la colonia
    void colonia_desplegar ( colonia c ) ;
    //Dada la cédula del docente a cargo de un grupo, listar detalladamente todos los datos del grupo correspondiente.
    void colonia_detallargrupo ( colonia c, long int cedula ) ;
    //Dada una hora (hh), listar por pantalla cédula, nombre y apellido del docente, cantidad de estudiantes y hora de entrada (hh:mm) de todos los grupos registrados actualmente que hayan ingresado dentro de dicha hora.
    void colonia_gruposhora ( colonia c, int h ) ;
    // Dada una fecha (dd/mm/aaaa), listar por pantalla cédula, nombre y apellido del docente,cantidad de estudiantes y hora de entrada (hh:mm) de todos los grupos afiliados actualmente registrados y que tengan esa fecha de afiliación.
    void colonia_gruposfecha ( colonia c, fecha f ) ;
    // Calcular el total recaudado hasta el momento por concepto de entradas vendidas.
    long int colonia_calculartotal ( colonia c ) ;
    // Devolver la cantidad de grupos afiliados y no afiliados registrados actualmente.
    void colonia_afnoaf ( colonia c, int &af, int &noaf ) ;
    // Devolver los datos del grupo registrado con la mayor cantidad de estudiantes.
    void colonia_grupogrande ( colonia c ) ;

#endif