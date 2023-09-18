#include "string.h"

// a
int strlar ( string s ) {
    int i = 0 ;
    while ( s[i] != '\0' ) {
        i++ ;
    }
    return ( i ) ;
}
// b
void print ( string s ) {
    int i = 0 ;
    while ( s[i] != '\0' ) {
        printf ("%c", s[i] ) ;
        i++ ;
    } 
}
// c
void scan (string &s) {
    int i = 0 ;
    char c ;
    fflush(stdin) ;
    scanf ("%c",&c);
    while ((c != '\n') && (i < MAXS - 1)) {
        s[i] = c;
        i++;
        scanf("%c",&c);
    }
    s[i] = '\0';
}
// d
boolean strmen ( string s1, string s2 ) {
    boolean b = TRUE ;
    int i = 0 ;
    while ( b && s1[i] != '\0' && s2[i] != '\0') {
        if ( s1[i] > s2[i] )
            b = FALSE ;
        else
            i++ ;
    }
    return ( b ) ;
}
// e 
boolean streq ( string s1, string s2 ) {
    boolean b = TRUE ;
    int i = 0 ;
        do {
            if ( s1[i] != s2[i] )
                b = FALSE ;
            else
                i++ ;
        } while ( b && ( i == 0 || s1[i-1] != '\0') ) ;
    return ( b ) ;
}
// f 
void strcop ( string &s1, string s2 ) {
    int i = 0 ;
    while ( s2[i] != '\0' ) {
        s1[i] = s2[i] ;
        i++ ;
    } 
    s1[i] = '\0' ;
}
// g
void strcon ( string &s1, string s2 ) {
    int i = strlar ( s1 ) , j = 0 ;
    while ( s2[j] != '\0' && ( i + j ) < MAXS-1 ) {
        s1[i+j] = s2[j] ; 
        j++ ;
    }
    s1[i+j] = '\0' ;
}
// h
void strswp ( string &s1, string &s2 ) {
    string aux ;
    strcop ( aux, s1 ) ;
    strcop ( s1, s2 ) ;
    strcop ( s2, aux ) ;
}