#include <iostream>
#include<stdlib.h>

using namespace std;

void pedirDatos();
void buscarElemento(int *, int);
int nElementos, *elemento;

int main() {
    pedirDatos();
    buscarElemento(elemento, nElementos);
    delete [] elemento;
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

void buscarElemento(int *elemento, int nElementos) {
    int dato, i;
    bool band = false;
    cout<<"Digite el numero a buscar: ";
    cin>>dato;
     i=0;
     // busqueda secuencial
     while ((i<nElementos) && (band==false)) {
        if (*(elemento+i) == dato)
        {
            band = true;
        }
        i++;
     }

     if (band==false)
     {
        cout<<"El numero "<<dato<<"No existe en el arreglo"<<endl;
     } else {
        cout<<"El numero "<<dato<<"Existe en el arreglo, pos: "<<i-1<<endl;
     }
     
}