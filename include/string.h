#ifndef _string_H
#define _string_H

    #include "boolean.h"
    const int MAXS = 80 ;
    typedef char string[MAXS] ;
    
    // a
    int strlar ( string s ) ;
    // b
    void print ( string s ) ;
    // c
    void scan (string &s) ;
    // d
    boolean strmen ( string s1, string s2 ) ;
    // e 
    boolean streq ( string s1, string s2 ) ;
    // f - copia el segundo en el primero
    void strcop ( string &s1, string s2 ) ;
    // g
    void strcon ( string &s1, string s2 ) ;
    // h
    void strswp ( string &s1, string &s2 ) ;

#endif