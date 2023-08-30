#include <iostream>
#include<stdlib.h>

using namespace std;

void pedirDatos();
void ordenarArreglo(int *, int);
void mostrarArreglo(int *, int);

int nElementos, *elemento;

int main() {
    
    pedirDatos();
    ordenarArreglo(elemento, nElementos);
    mostrarArreglo(elemento, nElementos);
    delete [] elemento; //liberar la memoria utilizada para el arreglo dinamico
    return 0;
}


void pedirDatos() {
    cout<<"Digite el numero de elementos: ";
    cin>>nElementos;

    elemento = new int [nElementos];

    for(int i = 0; i<nElementos; i++) {
        cout<<"Digite un numero: ";
        cin>>*(elemento + i); //elemento[i]
    }

}

void ordenarArreglo( int *elemento, int nElemento) {
    int aux;
    // Ordenamiento burbuja
    for (int i = 0; i < nElementos; i++) {
        for (int j = 0; j< nElementos -1; j++){
            if (*(elemento+j) > *(elemento+j+1)) {
                aux = *(elemento+j);
                *(elemento+j) = *(elemento+j+1);
                *(elemento+j+1) = aux;
            }
        }
    }
    
}

void mostrarArreglo( int *elemento, int nElementos) {
    cout<<"Mostrar arreglo ordenado: \n";
    for (int i = 0; i < nElementos; i++)
    {
        cout<<"Valor: "<<*(elemento+i)<<endl;
    }
}