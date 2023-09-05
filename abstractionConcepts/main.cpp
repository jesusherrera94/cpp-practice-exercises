#include <iostream>
#include "Planta.h"
#include "Carnivoro.h"
#include "Hervivoro.h"

using namespace std;

int main() {
    Planta* p1 = new Planta();
    p1->alimentarse();

    Carnivoro* c1 = new Carnivoro();
    c1->alimentarse();

    Hervivoro* h1 = new Hervivoro();
    h1->alimentarse();

    delete p1;
    delete c1;
    delete h1;

    return 0;
}