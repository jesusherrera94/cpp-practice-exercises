#include <iostream>
#include "Hidroavion.h"

using namespace std;

int main() {
    Hidroavion* ob1 = new Hidroavion("Veloz12", "HA99", "123OP");
    ob1->mostrarDatos();
    cout<<endl;
    ob1->indicarBarco();
    ob1->indicarAvion();
    delete ob1; 
    return 0;
}