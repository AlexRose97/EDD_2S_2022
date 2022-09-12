/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoB.h
 * Author: Alex Rose
 *
 * Created on 11 de septiembre de 2022, 10:22 AM
 */

#ifndef NODOB_H
#define NODOB_H

#include <stddef.h>

#include <iostream>
using namespace std;

class NodoB {
public:
    int id;
    //Apuntadores dentro de la rama
    NodoB* siguiente;
    NodoB* anterior;

    //apuntadores al inicio de otra rama
    NodoB* derecha;
    NodoB* izquierda;

    NodoB(int valor) {
        id = valor;
        siguiente = NULL;
        anterior = NULL;
        derecha = NULL;
        izquierda = NULL;
    }
private:

};

#endif /* NODOB_H */

