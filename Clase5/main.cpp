/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alex Rose
 *
 * Created on 20 de agosto de 2022, 09:36 AM
 */


#include <cstdlib>
#include <iostream>
#include "ListaInterna.h"
#include "ListaPrincipal.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ListaPrincipal pruebas;
    pruebas.Insertar(1,1);
    pruebas.Insertar(2,1);
    pruebas.Insertar(3,1);
    pruebas.Insertar(1,2);
    pruebas.Insertar(2,2);
    
    pruebas.Insertar(1,4);
    pruebas.Insertar(2,5);
    pruebas.Insertar(3,6);
    //pruebas.Imprimir();
    
    pruebas.GenerarGrafo();
    
    return 0;
}

