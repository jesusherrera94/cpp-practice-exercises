#include <iostream>
#include <iterator>
#include <algorithm>
#include <set> // para set y multiset

using namespace std;

int main() {
    // El multiset si permite agregar elementos repetidos
    multiset<int> valores;
    valores.insert(10);
    valores.insert(2);
    valores.insert(5);
    valores.insert(20);
    valores.insert(3);

    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|"));
    cout<<endl;

    // Insertar valores duplicados
    valores.insert(10);
    valores.insert(3);
    valores.insert(3);
    valores.insert(3);
    cout<<endl;
    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|"));
    cout<<endl;

    // Buscar un elemento del multiset
    multiset<int>::iterator i = valores.find(2);
    if (i != valores.end()) {
        cout<<"El elemento "<<*i<<" si ha sido encontrado"<<endl;
    } else {
        cout<<"El elemento no ha sido encontrado"<<endl;
    }

    // Contar cuantas veces aparece determinados elementos

    cout<<"El numero 3 aparece: "<<valores.count(3)
    <<" veces en el multiset."<<endl;

    // Eliminar un elemento del multiset
    valores.erase(3); // elimina todos los elementos que coincidan con ese criterio
    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|"));
    cout<<endl;
    return 0;
}