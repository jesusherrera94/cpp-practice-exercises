#include <iostream>
#include "ordenar.h"

using namespace std;
template< typename T>
void pedirDatos(T *arreglo, int n) {
    for (int i = 0; i < n; i++)
    {
        cout<<"Digite un elemento: ";
        cin>>arreglo[i];
    }
    
}

template <typename T>
void mostrarArreglo(T *arreglo, int n) {
    for (int i = 0; i < n; i++)
    {
        cout<<"Elemento["<<i<<"]: "<<arreglo[i]<<endl;
    }
    
}

int main() {
    int nElementos;
    cout<<"Digite la cantidad de elementos del arreglo: ";
    cin>>nElementos;
    char *elementos = new char[nElementos];
    cout<<"Pidiendo los elementos del arreglo: "<<endl;
    pedirDatos(elementos, nElementos);
    //Ordenamos los elementos ascendentemente
    cout<<"Arreglo ordenado ascendentemente: "<<endl;
    ordenarAsc(elementos, nElementos);
    mostrarArreglo(elementos, nElementos);
    cout<<"Arreglo ordenado descendentemente: "<<endl;
    ordenarDesc(elementos, nElementos);
    mostrarArreglo(elementos, nElementos);
    delete[] elementos;
    return 0;
}