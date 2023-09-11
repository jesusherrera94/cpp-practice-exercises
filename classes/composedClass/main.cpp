#include <iostream>
#include "Estudiante.h"

using namespace std;

int main() {
    Estudiante* ed1 = new Estudiante("34fg", 15.6, 56, "123");

    ed1->mostrarDatos();
    
    return 0;
}