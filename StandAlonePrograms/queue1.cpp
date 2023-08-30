#include <iostream>
#include<stdlib.h>

using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;
};

void insertarCola(Nodo *&, Nodo *&, int);
void suprimirCola(Nodo *&, Nodo *&, int &);
bool colaVacia(Nodo *);

int main() {
    /*
    Insertar elementos en una cola:
    1. Crear espacio en memoria para almacenar un nodo.
    2. Asignar el nuevo nodo al dato que queremos asignar.
    3. Asignar punteros frente y el fin hacia el nuevo nodo.
    */
   /*
    Eliminar elementos de una cola:
    1. Obtener el valor del nodo.
    2. Crear un nodo aux y asignarle el frente de la cola.
    3. Eliminar el nodo del frente de la cola.
   */
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int dato;
    cout<<"Digite un numero: ";
    cin>>dato;
    insertarCola(frente, fin, dato);
    cout<<"Digite un numero: ";
    cin>>dato;
    insertarCola(frente, fin, dato);
    cout<<"Digite un numero: ";
    cin>>dato;
    insertarCola(frente, fin, dato);
    cout<<"Eliminando elementos de cola: \n";
    while (frente != NULL ){
        suprimirCola(frente, fin, dato);
        if(frente != NULL) {
            cout<<dato<<",";
        } else {
            cout<<dato<<".\n";
        }
    }

    return 0;
}

void insertarCola(Nodo *&frente, Nodo *&fin, int n) {
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo ->dato = n;
    nuevoNodo->siguiente = NULL;
    if(colaVacia(frente)) {
        frente = nuevoNodo;
    } else {
        fin->siguiente = nuevoNodo;
    }

    fin = nuevoNodo;
}

void suprimirCola(Nodo *&frente, Nodo *&fin, int &n){
    n = frente ->dato;
    Nodo *aux = frente;
    if (frente == fin) {
        frente = NULL;
        fin = NULL;
    }
    else {
        frente = frente->siguiente;
    }
    delete aux;
}

bool colaVacia(Nodo *frente) {
    return (frente == NULL);
}