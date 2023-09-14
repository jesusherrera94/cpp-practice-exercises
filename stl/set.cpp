#include <iostream>
#include <iterator>
#include <algorithm>
#include <set> // para set y multiset
using namespace std;

int main() {
    
    set<int> valores; // Creando un conjunto de datos
    valores.insert(5); //Insertamos elementos
    valores.insert(3);
    valores.insert(10);
    valores.insert(1);
    valores.insert(15);

    // Mostrando el set en pantalla

    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|"));
    cout<<endl;
    // Los set evitan la duplicidad
    valores.insert(3);
    valores.insert(10);

    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|"));
    cout<<endl;

    // Busqueda de un elemento dentro del set

    set<int>::iterator i = valores.find(3);

    if (i != valores.end()) {
        cout<<"Tal elemento "<<*i<<" si ha sido encontrado"<<endl;
    } else {
        cout<<"El elemento no ha sido encontrado"<<endl;
    }

    // Eliminar un elemento del conjunto

    valores.erase(1);
    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|"));
    cout<<endl;

    return 0;
}