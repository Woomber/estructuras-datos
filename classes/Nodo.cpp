/* 
 * File:   Nodo.cpp
 * Author: yael
 * 
 * Created on February 7, 2019, 4:00 PM
 */
#include <cstring>
#include "Nodo.h"

Nodo::Nodo() {
}

Nodo::Nodo(char* contenido, Nodo* sig, Nodo* ant) {
    this->sig = sig;
    this->ant = ant;
    
    // Copiar la cadena
    int size = sizeof(&contenido) / sizeof(char);
    this->contenido = new char[size];
    strcpy(this->contenido, contenido);
}

Nodo::~Nodo() { 
    delete contenido;
}