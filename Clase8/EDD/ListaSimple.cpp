#include "ListaSimple.h"

void ListaSimple::InsertarFinal(int valor)
{
    nodosimple *nuevo = new nodosimple();
    nuevo->valor = valor;

    if (Inicio == NULL)
    {
        Inicio = nuevo;
    }
    else
    {
        nodosimple *auxActual = Inicio;

        while (auxActual != NULL)
        {
            if (auxActual->sig == NULL)
            {
                auxActual->sig = nuevo;
                break;
            }
            auxActual = auxActual->sig;
        }
    }
}

void ListaSimple::InsertarEnOrden(int valor)
{
    nodosimple *nuevo = new nodosimple();
    nuevo->valor = valor;
    if (Inicio == NULL)
    { //Si la lista se encuentra vacia
        Inicio = nuevo;
    }
    else
    { //si la lista no esta vacia
        nodosimple *auxActual = Inicio;
        nodosimple *auxSiguiente;
        while (auxActual != NULL)
        {
            auxSiguiente = auxActual->sig;
            if (nuevo->valor < auxActual->valor)
            { //insertar al inicio de la lista por que es menor
                nuevo->sig = auxActual;
                Inicio = nuevo;
                break;
            }
            else if (auxSiguiente == NULL)
            { //insertar al final de la lista
                auxActual->sig = nuevo;
                break;
            }
            else if (nuevo->valor < auxSiguiente->valor)
            { //insertar en medio de la lista
                auxActual->sig = nuevo;
                nuevo->sig = auxSiguiente;
                break;
            }
            auxActual = auxActual->sig;
        }
    }
}

string ListaSimple::getDatos()
{
    if (Inicio == NULL)
        return "[\n]";

    string out = "";
    nodosimple *aux = Inicio;
    while (aux != NULL)
    {

        out += "{\"Id\": \"" + to_string(aux->valor) + "\"}";
        aux = aux->sig;
        if (aux != NULL)
        {
            out += ",";
        }
    }
    return "[\n " + out + "\n]";
}

string ListaSimple::Buscar(int id)
{
    if (Inicio == NULL)
        return "El valor no se encuentra en la lista";

    string out = "";
    int contador = 0;
    nodosimple *aux = Inicio;
    while (aux != NULL)
    {

        if (aux->valor == id)
        {
            return "El id se encuntra en la posicion " + to_string(contador);
        }
        aux = aux->sig;
        contador++;
    }
    return "El valor no se encuentra en la lista";
}
