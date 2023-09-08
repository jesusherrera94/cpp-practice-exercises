#include <iostream>
#include "intercambio.h"

using namespace std;

int main() {
    string dato1, dato2;
    cout<<"Digite el valor de dato1: ";
    cin>>dato1;
    cout<<"Digite el valor de dato2: ";
    cin>>dato2;
    // intercambiar valores
    intercambiar(dato1, dato2);
    cout<<"Datos cambiados: "<<dato1<<", "<<dato2<<endl;
    return 0;
}