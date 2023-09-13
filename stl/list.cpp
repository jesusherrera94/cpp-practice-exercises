#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> datos;
    // Agregar elementos
    datos.push_back(5); // Agregamos un elemento al final de la lista
    datos.push_back(1);
    datos.push_back(6);
    datos.push_front(2); // Agregamos un elemento al principio de la lista
    datos.push_front(7);
    // ordenar los elemntos 
    datos.sort();
    // Imprimir elementos de la lista
    list<int>::iterator i; // creamos un iterador para la lista
    i = datos.begin(); // Inicializamos el iterador al principio de la lista
    while (i != datos.end())
    {
        cout<< *i <<" | "; // Usamos el simbolo de puntero para acceder al dato, caso contrario obtendremos ladireccion de memoria
        i++;
    }
    cout<<endl;
    // Eliminar elementos de la lista

    datos.pop_back(); // Eliminamos elementos del final de la lista
    datos.pop_front(); // Eliminamos elementos del principio de la lista

    i = datos.begin(); // Inicializamos el iterador al principio de la lista
    while (i != datos.end())
    {
        cout<< *i <<" | "; // Usamos el simbolo de puntero para acceder al dato, caso contrario obtendremos ladireccion de memoria
        i++;
    }
    cout<<endl;
    
    return 0;
}