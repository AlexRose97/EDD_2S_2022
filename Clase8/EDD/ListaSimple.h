#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include "nodoSimple.h"

#include <iostream>
#include <string>
using namespace std;

class ListaSimple
{
public:
    nodosimple *Inicio;

    ListaSimple()
    {
        Inicio = NULL;
    }
    void InsertarFinal(int valor);
    void InsertarEnOrden(int valor);
    string getDatos();
    string Buscar(int id);

private:
};

#endif /* LISTASIMPLE_H */
