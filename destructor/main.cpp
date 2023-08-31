#include <iostream>
#include "Perro.h"

using namespace std;

int main() {
    Perro p1("Fido", "Doberman");
    p1.mostrarDatos();
    p1.jugar();
    // destructor de un objeto estatico
    p1.~Perro();

    Perro* p2 = new Perro("Sasa", "Pitbul");

    p2->jugar();
    // destructor de objeto dinamico
    delete p2;

    return 0;
}