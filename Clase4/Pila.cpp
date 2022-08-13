/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pila.cpp
 * Author: Alex Rose
 * 
 * Created on 13 de agosto de 2022, 10:11 AM
 */

#include "Pila.h"

void Pila::push(int valor) {
    nodo*nuevo = new nodo();
    nuevo->valor = valor;

    if (Inicio == NULL) {
        Inicio = nuevo;
    } else {
        nuevo->sig=Inicio;
        Inicio=nuevo;
    }
}

void Pila::pop() {
    nodo*aux =Inicio;
    Inicio=aux->sig;
}

void Pila::Imprimir() {
    nodo*aux = Inicio;
    while (aux != NULL) {
        cout <<"[" << aux->valor << "]\n";
        aux = aux->sig;
    }
}


