/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoSimple.h
 * Author: Alex Rose
 *
 * Created on 6 de agosto de 2022, 09:37 AM
 */

#ifndef NODOSIMPLE_H
#define NODOSIMPLE_H
#include <stddef.h>

class nodosimple {
public:
    int valor;
    nodosimple*sig;
    nodosimple() {
        sig = NULL;
        valor = 0;
    }
private:
};
#endif /* NODOSIMPLE_H */

