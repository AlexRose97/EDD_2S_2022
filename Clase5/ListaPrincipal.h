/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaPrincipal.h
 * Author: Alex Rose
 *
 * Created on 20 de agosto de 2022, 09:36 AM
 */

#ifndef LISTAPRINCIPAL_H
#define LISTAPRINCIPAL_H

#include <iostream>

#include "NodoPrincipal.h"

using namespace std;

class ListaPrincipal {
public:
    nodoprincipal*Inicio;

    ListaPrincipal() {
        Inicio = NULL;
    }
    void Imprimir();
    void GenerarGrafo();
    void Insertar(int valor, int categoria);
    nodoprincipal * BuscarPrincipal(nodoprincipal*inicioL, int categoria);
    
private:
};
#endif /* LISTAPRINCIPAL_H */

