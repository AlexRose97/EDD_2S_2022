/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaSimple.h
 * Author: Alex Rose
 *
 * Created on 6 de agosto de 2022, 09:42 AM
 */

#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include "nodoSimple.h"

#include <iostream>
using namespace std;

class ListaSimple {
public:
    nodosimple*Inicio;

    ListaSimple() {
        Inicio = NULL;
    }
    void InsertarFinal(int valor);
    void InsertarEnOrden(int valor);
    void Imprimir();
private:
};

#endif /* LISTASIMPLE_H */

