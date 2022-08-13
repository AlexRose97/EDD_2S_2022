/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alex Rose
 *
 * Created on 13 de agosto de 2022, 10:10 AM
 */

#include <cstdlib>
#include "Pila.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Pila pruebas;
    pruebas.push(4);
    pruebas.push(3);
    pruebas.pop();
    pruebas.push(2);
    pruebas.push(0);
    
    pruebas.Imprimir();
    
    return 0;
}

