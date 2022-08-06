/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alex Rose
 *
 * Created on 6 de agosto de 2022, 09:29 AM
 */

#include <cstdlib>
#include <iostream>

#include "ListaSimple.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    ListaSimple pruebas;
    pruebas.InsertarEnOrden(7);
    pruebas.InsertarEnOrden(1);
    pruebas.InsertarEnOrden(4);
    pruebas.InsertarEnOrden(5);
    pruebas.InsertarEnOrden(6);
    pruebas.InsertarEnOrden(8);
    pruebas.Imprimir();
    return 0;
}

