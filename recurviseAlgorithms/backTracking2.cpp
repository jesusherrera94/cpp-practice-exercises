#include <iostream>

using namespace std;

const int N = 8;
int reinas[N];

void ponerReina(int, bool &);
bool valido (int);
void mostrarTablero();

int main() {
    bool solucion;
    ponerReina(0, solucion);
    if (solucion) {
        cout<<"Si existe combinacion de reinas"<<endl;
        mostrarTablero();
    } else {
        cout<<"NO existe combinacion de reinas"<<endl;
    }
    return 0;
}

void ponerReina(int i, bool &solucion) {
    int k=0; //inicia el contador de movimientos
    solucion = false;
    do
    {
        reinas[i] = k; //coloca y anota la reina i en la fila k
        k++;
        mostrarTablero();
        cout<<endl;
        if (valido(i)) {
            if (i<(N-1)) {
                ponerReina(i+1,solucion);
                if (!solucion) { //vuelta atras
                    reinas[i] = 0;
                }
            } else { //Todas las reinas colocadas
                solucion = true;
            }
        }
    } while (!solucion && (k<N)); 
}

/*
    Comporbar si la reina de la columna i 
    No se amenaza con ninguna reina ya puesta
*/
bool valido (int i) {
    bool v = true;
    for (int r = 0; r < i; r++)
    {
        v = v && (reinas[i] != reinas[r]); // comprobar si la fila esta esta vacia
        v = v && ((reinas[i]-i) != (reinas[r]-r)); //compronar con la diagonal 1
        v = v && ((reinas[i]+i) != (reinas[r]+r)); //compronar con la diagonal 2
    }
    return v;
    
}

void mostrarTablero() {
    int tablero[N][N];
    //asignamos los valores del tablero a cero
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            tablero[i][j] = 0;
        }    
    }
    cout<<"Mostrando arreglo"<<endl;
    for (int i = 0; i < N; i++)
    {
        cout<<reinas[i]<<" | ";
    }
    cout<<endl<<endl;
    // asignamos el valor del arreglo al tablero
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            tablero[reinas[j]][j] = 1;
        }    
    }

    cout<<"Mostrando el tablero "<<endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout<<tablero[i][j]<<" | ";
        }
        cout<<endl;
    }
}