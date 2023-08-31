#include <iostream>
#include "Persona.h"

using namespace std;

int main() {
    Persona* p1 = new Persona("Jesus", 29);
    p1->correr();
    p1->correr(10);
    return 0;
}