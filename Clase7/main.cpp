/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alex Rose
 *
 * Created on 11 de septiembre de 2022, 10:22 AM
 */

#include <cstdlib>

#include "ArbolB.h"
#include <windows.h> 
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ArbolB pruebas;
    //        pruebas.insertar(0);
    //        pruebas.insertar(1);
    //        pruebas.insertar(2);
    //        pruebas.insertar(3);
    //        pruebas.insertar(4);
    //        pruebas.insertar(5);
    //        pruebas.insertar(6);
    //        pruebas.insertar(7);
    //        pruebas.insertar(8);
    //        pruebas.insertar(9);
    //        pruebas.insertar(10);
    //        pruebas.insertar(11);
    //        pruebas.insertar(12);
    //        pruebas.insertar(13);
    //        pruebas.insertar(14);
    //        pruebas.insertar(15);
    //        pruebas.insertar(16);
    //        pruebas.insertar(17);
    pruebas.insertar(17);
    pruebas.insertar(16);
    pruebas.insertar(15);
    pruebas.insertar(14);
    pruebas.insertar(13);
    pruebas.insertar(12);
    pruebas.insertar(11);
    pruebas.insertar(10);
    pruebas.insertar(9);
    pruebas.insertar(8);
    pruebas.insertar(7);
    pruebas.insertar(6);
    pruebas.insertar(5);
    pruebas.insertar(4);
    pruebas.insertar(3);
    pruebas.insertar(2);
    pruebas.insertar(1);
    pruebas.insertar(0);
    pruebas.insertar(223);
    pruebas.insertar(34);
    pruebas.insertar(55);
    pruebas.insertar(67);
    pruebas.insertar(227);
    pruebas.insertar(225);
    pruebas.Grafo();
    return 0;
}

