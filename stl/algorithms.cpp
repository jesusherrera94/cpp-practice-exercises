#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <cstdlib>

using namespace std;

int numerosAleatorios() {
    return rand()%10;
}

int main() {
    list<int> valores(10);
    generate(valores.begin(),valores.end(), numerosAleatorios); //generar valores aleatorios e insertarlos del principio al final de la lista
    //Mostrando los elementos en la consola
    ostream_iterator<int> salida(cout," | ");
    copy(valores.begin(), valores.end(), salida); // pasar los elementos desde el inicio al final a salida.
    cout<<endl;

    // Buscamos la primera aparicion del numero 8 en la lista.
    list<int>::iterator i;
    i = find(valores.begin(), valores.end(), 8);

    // Analizamos el valor de i no sobrepasa los valores de la lista
    if(i != valores.end()) { // .end retorna null
        cout<<"El elemento "<<*i<< " si ha sido encontrado en la lista"<<endl;
    } else {
        cout<<"El elemento no ha sido encontrado"<<endl;
    }

    return 0;
}