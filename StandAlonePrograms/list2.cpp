#include <iostream>
#include<stdlib.h>

using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void calcularMayorYMenor(Nodo *);

int main() {
    Nodo *lista = NULL;
    int dato;
    char rsp;
    do
    {
        cout<<"Digite un numero: ";
        cin>>dato;
        insertarLista(lista, dato);
        cout<<"Desea agregar otro nodo?[s/n]: ";
        cin>>rsp;
    } while (rsp!='s');
    cout<<"Los elementos de la lista son:\n";
    mostrarLista(lista);
    cout<<endl;
    calcularMayorYMenor(lista);

    return 0;
}
//insertar elementos al final de la lista
void insertarLista(Nodo *&lista, int n){
    Nodo *nodoNuevo = new Nodo();
    Nodo *aux;
    nodoNuevo -> dato = n;
    nodoNuevo->siguiente = NULL;
    if (lista == NULL){
        lista = nodoNuevo;
    } else {
        aux = lista;
        while ((aux->siguiente != NULL))
        {
            aux = aux->siguiente;
        }
        aux ->siguiente = nodoNuevo;
    }
}

void mostrarLista(Nodo *lista) {
    while (lista != NULL)
    {
        cout<<lista->dato<<"->";
        lista = lista->siguiente;
    }
    cout<<endl;
}

void calcularMayorYMenor(Nodo *lista) {
    int mayor = 0, menor = 9999999;

    while (lista != NULL)
    {
        if (lista->dato > mayor) {
            mayor = lista->dato;
        }
        if (lista->dato<menor){
            menor = lista->dato;
        }
        lista = lista->siguiente;
    }

    cout<<"El mayor elemento es: "<<mayor<<endl;
    cout<<"El menor elemento es: "<<menor<<endl;
    
}