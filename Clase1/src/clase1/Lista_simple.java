/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package clase1;

/**
 *
 * @author Alex Rose
 */
public class Lista_simple {

    Nodo_LS inicio;

    public Lista_simple() {
        this.inicio = null;
    }

    //Metodo para insertar valores al final///
    public void InsertarFinal(String valor) {
        Nodo_LS nuevo = new Nodo_LS(valor);
        if (inicio == null) {//Si la lista se encuentra vacia
            inicio = nuevo;
        } else {//si la lista no esta vacia
            Nodo_LS auxActual = inicio;

            while (auxActual != null) {
                if (auxActual.Siguiente == null) {
                    auxActual.Siguiente = nuevo;
                    break;
                }
                auxActual = auxActual.Siguiente;
            }
        }
    }
    
    
    //Metodo para insertar valores al final///
    public void InsertarOrden(String valor) {
        Nodo_LS nuevo = new Nodo_LS(valor);
        if (inicio == null) {//Si la lista se encuentra vacia
            inicio = nuevo;
        } else {//si la lista no esta vacia
            Nodo_LS auxActual = inicio;
            Nodo_LS auxSiguiente;
            while (auxActual != null) {
              auxSiguiente=auxActual.Siguiente;
              if(nuevo.valor.compareTo(auxActual.valor)<0){//insertar al inicio de la lista por que es menor
                  nuevo.Siguiente=auxActual;
                  inicio=nuevo;
                  break;
              }else if(auxSiguiente==null){//insertar al final de la lista
                  auxActual.Siguiente=nuevo;
                  break;
              }else if(nuevo.valor.compareTo(auxSiguiente.valor)<0){//insertar en medio de la lista
                  auxActual.Siguiente=nuevo;
                  nuevo.Siguiente=auxSiguiente;
                  break;
              }
              
              auxActual=auxActual.Siguiente;
              
            }
        }
    }

    //meto para imprimir la lista
    public void Imprimir() {
        Nodo_LS auxActual = inicio;

        while (auxActual != null) {
            System.out.print("["+auxActual.valor+"]->");
            auxActual = auxActual.Siguiente;
        }
        
        System.out.println("NULL");

    }

}
