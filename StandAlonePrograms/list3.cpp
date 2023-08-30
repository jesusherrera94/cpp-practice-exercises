#include <iostream>

using namespace std;

struct Nodo {
    float dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&, float);
void mostrarLista(Nodo *);
void calcularSumaPromedio(Nodo *);

int main() {
    Nodo *lista = NULL;
    float dato;
    char rsp;
    do
    {
        cout<<"Ingrese un numero: ";
        cin>>dato;
        insertarLista(lista, dato);
        cout<<"Desea seguir agregando nuevos elementos?[s/n]: ";
        cin>>rsp;
    } while (rsp =='s');
    cout<<"\n Elementos en lista: \n";
    mostrarLista(lista);
    calcularSumaPromedio(lista);
    return 0;
}

void insertarLista(Nodo *&lista, float n){
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

void calcularSumaPromedio(Nodo *lista) {
    float suma = 0, promedio;
    int count = 0;
    while (lista != NULL)
    {
        suma += lista->dato;
        count++;
        lista = lista->siguiente;
    }

    promedio = suma / count;

    cout<<"Suma total: "<<suma<<endl;
    cout<<"Promedio: "<<promedio<<endl;
    
}