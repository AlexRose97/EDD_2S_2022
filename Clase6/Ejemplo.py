
from Matriz import Matriz

print("--------------");
matrizPrueba=Matriz()
matrizPrueba.insertarNodo(0,0,"hola0")
matrizPrueba.insertarNodo(1,1,"hola1")
matrizPrueba.insertarNodo(2,2,"hol2")
matrizPrueba.insertarNodo(3,3,"hola3")
matrizPrueba.insertarNodo(1,0,"hola3")
matrizPrueba.insertarNodo(5,0,"hola3")
matrizPrueba.insertarNodo(1,6,"hola3")

print("--------------");
matrizPrueba.imprimir()