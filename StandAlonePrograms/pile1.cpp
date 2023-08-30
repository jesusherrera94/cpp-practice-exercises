#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);

int main() {
    /*
    Pasos para insertar en una pila:
    1. Crear el espacio en memoria para almacenar un nodo.
    2. Cargar el valor dentro del nodo(dato).
    3. Cargar el puntero pila dentro del nodo(*siguiente).
    4. Asignar el nuevo nodo a pila
    */
   /*
   Para eliminar elementos de una pila:
   1. Crear una variable auxiliar(*aux) del tipo Nodo.
   2. Igualar el n a aux->dato.
   3. Pasar pila a siguiente nodo.
   4. Eliminar aux.
   */

    Nodo *pila = NULL;
    int dato;
    cout<<"Digite un numero: ";
    cin>>dato;
    agregarPila(pila, dato);
    cout<<"Digite un numero: ";
    cin>>dato;
    agregarPila(pila, dato);

    cout<<"\n sacando los elementos de la pila: \n";
    while(pila != NULL) { //mientras no sea el final de la pila
        sacarPila(pila, dato);
        if(pila != NULL) {
            cout<<"Dato: "<<dato<<" , ";
        } else {
            cout<<dato<<".\n";
        }
    }

    return 0;
}

void agregarPila(Nodo *&pila, int n) {
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = n;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;
}

void sacarPila(Nodo *&pila, int &n) {
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}