#include <iostream>

using namespace std;

int main() {
    int numeros[] = {11,22,33,44,55};

    int *dirNumbers;
    // asignarle la cabeza del arreglo al puntero
    dirNumbers = numeros;

    for (int i = 0; i < 5; i++)
    {
        // para recorrer el arreglo solo es necesario poner el valor del apuntador 
        // apuntando al arreglo y ponerle ++
        cout<<"Elemento del vector ["<<i<<"]: "<<*dirNumbers++<<endl;
        cout<<"Posicion del  ["<<i<<"]: "<<dirNumbers++<<endl;
    }
    


    return 0;
}