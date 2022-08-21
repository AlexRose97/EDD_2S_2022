/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaPrincipal.cpp
 * Author: Alex Rose
 * 
 * Created on 20 de agosto de 2022, 09:36 AM
 */

#include "ListaPrincipal.h"
#include <windows.h> 
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>   // std::cout

void ListaPrincipal::Imprimir() {
    nodoprincipal*aux = Inicio;
    while (aux != NULL) {
        cout << "[" << aux->valor << "]->";
        nodointerno * auxI = aux->listainterna.Inicio;
        while (auxI != NULL) {
            cout << "[" << auxI->valor << "]->";
            auxI = auxI->sig;
        }
        cout << ("NULL");
        cout << ("\n | ");
        aux = aux->sig;
    }
    cout << ("NULL");
}

void ListaPrincipal::GenerarGrafo() {
    string dot = "";
    dot = dot + "digraph G {\n";
    dot = dot + "label=\"ListaDeImagenes\";\n";
    dot = dot + "node [shape=box];\n";



    nodoprincipal*aux = Inicio;
    dot = dot + "//agregar nodos\n";
    while (aux != NULL) {
        dot = dot + "N" + std::to_string(aux->valor) + "[label=\"" + std::to_string(aux->valor) + "\"];\n";
        aux = aux->sig;
    }
    dot = dot + "//Enlazar imagenes\n";
    dot = dot + "{rank=same;\n";
    aux = Inicio;
    while (aux != NULL) {

        dot = dot + "N" + std::to_string(aux->valor);
        if (aux->sig != NULL) {
            dot = dot + "->";
        }
        aux = aux->sig;
    }

    dot = dot + "}\n";
    dot = dot + "}\n";

    cout << dot;
    
     //------->escribir archivo
    ofstream file;
    file.open("Pruebas.dot");
    file << dot;
    file.close();

    //------->generar png
    system(("dot -Tpng Pruebas.dot -o  Pruebas.png"));

    //------>abrir archivo
    system(("Pruebas.png"));
    
}

void ListaPrincipal::Insertar(int valor, int categoria) {
    if (Inicio == NULL) {//lista se encuentra vacia
        nodoprincipal*nuevo = new nodoprincipal();
        nuevo->valor = categoria;
        nuevo->listainterna.InsertarEnOrden(valor);
        Inicio = nuevo;
    } else {//la lista no se encuentra vacia
        nodoprincipal*busqueda = BuscarPrincipal(Inicio, categoria);
        nodoprincipal*nuevo = new nodoprincipal();
        nuevo->valor = categoria;
        nuevo->listainterna.InsertarEnOrden(valor);
        if (busqueda == NULL) {//como no hay categoria insertamos al final una nueva
            nodoprincipal*auxActual = Inicio;
            while (auxActual != NULL) {
                if (auxActual->sig == NULL) {
                    auxActual->sig = nuevo;
                    break;
                }
                auxActual = auxActual->sig;
            }
        } else {//si la categoria existe se inserta en la misma
            busqueda->listainterna.InsertarEnOrden(valor);
        }
    }



    //    nodoprincipal*nuevo = new nodoprincipal();
    //    nuevo->valor = valor;
    //
    //    if (Inicio == NULL) {
    //        Inicio = nuevo;
    //    } else {
    //        nodoprincipal*auxActual = Inicio;
    //
    //        while (auxActual != NULL) {
    //            if (auxActual->sig == NULL) {
    //                auxActual->sig = nuevo;
    //                break;
    //            }
    //            auxActual = auxActual->sig;
    //        }
    //    }
}

nodoprincipal* ListaPrincipal::BuscarPrincipal(nodoprincipal* inicioL, int categoria) {
    if (inicioL == NULL) {
        return inicioL;
    } else {
        nodoprincipal*auxActual = inicioL;
        while (auxActual != NULL) {
            if (auxActual->valor == categoria) {
                break;
            }
            auxActual = auxActual->sig;
        }
        return auxActual;
    }
}
