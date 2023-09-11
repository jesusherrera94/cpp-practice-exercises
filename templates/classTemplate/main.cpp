#include <iostream>
#include "EjemploPlatilla.h"
using namespace std;

int main() {
    EjemploPlatilla<int,float> ob1(5,9.87);
    ob1.mostrarDatos();
    ob1.setDato1(10);
    ob1.setDato2(8.78);
    cout<<endl;
    ob1.mostrarDatos();
    return 0;
}