/* 
 * File:   ListaSimple.h
 * Author: yael
 *
 * Created on February 7, 2019, 4:17 PM
 */

#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

class Nodo;

class ListaSimple {
public:
    
    Nodo * inicio;
    
    // Constructor
    ListaSimple();
    
    // Metodos
    void insertarInicio(Nodo *);
    void insertarFin(Nodo *);
    
    void eliminarInicio();
    void eliminarFin();
    
    void imprimir();
    
    // Destructor
    virtual ~ListaSimple();


};

#endif /* LISTASIMPLE_H */

