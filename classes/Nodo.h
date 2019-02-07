/* 
 * File:   Nodo.h
 * Author: yael
 *
 * Created on February 7, 2019, 4:00 PM
 */

#ifndef NODO_H
#define NODO_H

class ListaSimple;

class Nodo {
public:
    
    Nodo * sig;
    Nodo * ant;
    
    char * contenido;
    
    // Constructores
    Nodo();
    Nodo(char*, Nodo* sig = nullptr, Nodo* ant = nullptr);

    // Destructor
    virtual ~Nodo();
    
    friend ListaSimple;
};

#endif /* NODO_H */

