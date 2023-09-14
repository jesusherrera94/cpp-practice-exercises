#include <iostream>
#include <iterator>
#include <map>
using namespace std;

typedef pair<int, string> par; // Crear una definicion con un alias

int main() {
    // crea un arbol clave-valor
    map<int, string> valores; // <clave,valor>
    // Insertar elementos en el map
    valores.insert(par(5, "Alejandro"));
    valores.insert(par(2, "Jesus"));
    valores.insert(par(1, "Juan"));
    valores.insert(par(3, "Estefany"));

    // Mostrar el map en pantalla

    map<int, string>::iterator i;

    for ( i = valores.begin(); i != valores.end(); i++)
    {
        cout<<"Clave: "<< i->first <<endl;
        cout<<"Valor: "<<i->second <<endl;
    }
    cout<<endl;
    
    // Ignora los valores repetidos
    valores.insert(par(1, "Luis"));
    for ( i = valores.begin(); i != valores.end(); i++)
    {
        cout<<"Clave: "<< i->first <<endl;
        cout<<"Valor: "<<i->second <<endl;
    }
    cout<<endl;

    // Modificar un valor de una clave existente
    valores[1] = "Luis";
    valores[8] = "Maria";

    for ( i = valores.begin(); i != valores.end(); i++)
    {
        cout<<"Clave: "<< i->first <<endl;
        cout<<"Valor: "<<i->second <<endl;
    }
    cout<<endl;

    // Buscar un elemento en el map

    i = valores.find(2); // buscamos por clave

    if (i != valores.end()) {
        cout<<"Tal elemento "<<i->second<<" si ha sido encontrado"<<endl;
    } else {
        cout<<"El elemento no ha sido encontrado"<<endl;
    }

    // Eliminar un elemento de un map

    valores.erase(1); // Eliminamos usando la clave

    for ( i = valores.begin(); i != valores.end(); i++)
    {
        cout<<"Clave: "<< i->first <<endl;
        cout<<"Valor: "<<i->second <<endl;
    }
    cout<<endl;

    return 0;
}