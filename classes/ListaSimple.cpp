/* 
 * File:   ListaSimple.cpp
 * Author: yael
 * 
 * Created on February 7, 2019, 4:17 PM
 */

#include <iostream>

#include "ListaSimple.h"
#include "Nodo.h"

ListaSimple::ListaSimple() {
    this->inicio = nullptr;
    
}

void ListaSimple::insertarInicio(Nodo* nuevo) {
    // Lista sin elementos
    if (this->inicio == nullptr) {
        this->inicio = nuevo;
        nuevo->sig = nullptr;
        return;
    }
    
    nuevo->sig = this->inicio;
    this->inicio = nuevo;
}

void ListaSimple::insertarFin(Nodo* nuevo) {
    
    // Lista sin elementos
    if (this->inicio == nullptr) {
        this->inicio = nuevo;
        nuevo->sig = nullptr;
        return;
    }
    
    Nodo * p = this->inicio;
    
    while(p->sig != nullptr) p = p->sig;
    
    p->sig = nuevo;
    
}

void ListaSimple::eliminarInicio() {
    
    // Lista sin elementos
    if(this->inicio == nullptr) {
        return;
    }
    
    Nodo * p = this->inicio->sig;
    
    // Eliminar el primer elemento
    delete this->inicio;
    
    // Poner el que era segundo como primero
    this->inicio = p;
    
}

void ListaSimple::eliminarFin() {
    // Lista sin elementos
    if(this->inicio == nullptr) {
        return;
    }
    
    // Lista con un elemento
    if(this->inicio->sig == nullptr) {
        delete this->inicio;
        this->inicio = nullptr;
        return;
    }
    
    Nodo * p = this->inicio;
    
    // Buscar el penúltimo elemento
    while(p->sig->sig != nullptr){
        p = p->sig;
    }
    
    // Eliminar su siguiente
    delete p->sig->sig;
    p->sig = nullptr;

}

void ListaSimple::imprimir(){
    Nodo * p = this->inicio;
    
    if(p == nullptr) {
        std::cout << "[Sin elementos]" << std::endl;
    }
    
    while(p != nullptr) {
        std::cout << p->contenido << std::endl;
        p = p->sig;
    }
    
    std::cout << std::endl;
}

ListaSimple::~ListaSimple() {
    
}

