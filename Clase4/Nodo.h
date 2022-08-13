/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.h
 * Author: Alex Rose
 *
 * Created on 13 de agosto de 2022, 10:11 AM
 */

#ifndef NODO_H
#define NODO_H

#include <stddef.h>

class nodo {
public:
    int valor;
    nodo*sig;
    nodo() {
        sig = NULL;
        valor = 0;
    }
private:
};

#endif /* NODO_H */

