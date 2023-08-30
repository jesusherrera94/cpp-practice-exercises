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
    Nodo *pila = NULL;
    int dato;
    char rpt;
    do{
        cout<<"Digite un numero: ";
        cin>>dato;
        agregarPila(pila, dato);
        cout<<"Deseas agregar otro elemento?[S/n]: ";
        cin>>rpt;
    }
    while ((rpt=='s')||(rpt=='S'));
    cout<<"\n Sacando todos los elementos de una pila: \n";
    while(pila != NULL) { //mientras no sea el final de la pila
        sacarPila(pila, dato);
        if(pila != NULL) {
            cout<<dato<<" , ";
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