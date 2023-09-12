#include <iostream>
#include <vector>

using namespace std;
int main() {
   vector<int> numeros;
    numeros.push_back(5); //Agrega elementos al final del arreglo
    numeros.push_back(10);
    numeros.push_back(1);
    numeros.push_back(15);
    numeros.push_back(20);

    numeros[2] = 7; //Esto edita un elemento en posicion

    // mostrar los elementos del arreglo
    for (int i = 0; i < numeros.size(); i++)
    {
        cout<<numeros[i]<<"|";
    }
    cout<<endl;
    numeros.pop_back(); //Elimina el ultimo el elemento del vector
    numeros.erase(numeros.begin()+1, numeros.begin()+3); // Elimina por rangos
    for (int i = 0; i < numeros.size(); i++)
    {
        cout<<numeros[i]<<"|";
    }
    cout<<endl;
    vector<int> numeros2(5); // reserva 5 espacios y se agregan de la forma legacy
    numeros2[0] = 5;
    numeros2[1] = 10;
    numeros2[2] = 1;
    numeros2[3] = 15;
    numeros2[4] = 20;
    
    return 0;
}