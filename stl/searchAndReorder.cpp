#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cstdlib>

using namespace std;

int numerosAleatorios() {
    return rand() % 30;
}

// Funcion logica para calcular si un numero es par
template <class T>
bool esPar(T valor) {
    return valor%2 == 0;
}

int main() {
    vector<int> valores(10);
    generate(valores.begin(),valores.end(), numerosAleatorios);
    //Mostrando los elementos en la consola
    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout," | ")); // pasar los elementos desde el inicio al final a salida
    cout<<endl;

    // Creamos un nuevo vector para almacenar los elementos pares
    vector<int> pares;

    vector<int>::iterator i = valores.begin();

    while ((i=find_if(i, valores.end(), esPar<int>)) !=valores.end()) // Buscando todas las coincidencias correctas, en este caso cuando es par.
    {
        pares.push_back(*i);
        i++;
    }
    
    sort(pares.begin(), pares.end()); // Ordena el vector pares

    // Mostramos el vector pares en pantalla
    copy(pares.begin(),pares.end(), ostream_iterator<int>(cout," | "));
    cout<<endl;



    return 0;
}