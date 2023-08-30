#include <iostream>
#include<stdlib.h>

using namespace std;

void pedirDatos();
void mostrarMatriz(int **, int, int);

// matriz de nxn
int **punteroMatriz, nFilas, nColumnas;

int main() {
    pedirDatos();
    mostrarMatriz(punteroMatriz, nFilas, nColumnas);
    // eliminar la memoria que hemos utilizado en la matriz
    for (int i = 0; i < nFilas; i++)
    {
        delete [] punteroMatriz[i];
    }

    delete [] punteroMatriz;
    
    return 0;
}

void pedirDatos() {
    cout<<"Ingrese el numero de filas: ";cin>>nFilas;
    cout<<"Ingrese el numero de columnas: ";cin>>nColumnas;

    // reservar espacios para la matriz dinamica
    punteroMatriz = new int *[nFilas]; //reservando memoria para las filas

    for(int i=0;i<nFilas; i++) {
        punteroMatriz[i] = new int[nColumnas];
    }

    cout<<"Digitando elementos de la matriz: \n";

    for (int j = 0; j < nFilas; j++)
    {
        for (int k = 0; k < nColumnas; k++)
        {
            cout<<"Digite un numero["<<j<<"]["<<k<<"]: ";
            cin>>*(*(punteroMatriz+j)+k);
        }
        
    }
}

void mostrarMatriz(int **punteroMatriz, int nFilas, int nColumnas) {
    cout<<"\nImprimiendo matriz: \n";
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nColumnas; j++)
        {
            cout<<*(*(punteroMatriz+i)+j)<<", ";
        }
        cout<<endl;
    }
    
}