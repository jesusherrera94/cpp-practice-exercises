#include <iostream>
#include "Personaje.h"

using namespace std;

void modificar(Personaje &p, int at, int df) {
    p.ataque = at;
    p.defensa = df;
}

int main() {
    Personaje* principal = new Personaje(100,90);
    principal->mostrarDatos();
    modificar(*principal, 60,50);
    principal->mostrarDatos();
    return 0;
}