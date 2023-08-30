#include <iostream>

using namespace std;

int sumar(int);

int main() {

    int nElementos;

    do {
        cout<<"Digite el numero de elementos: ";
        cin>>nElementos;
        cout<<endl;
    } while (nElementos <= 0);

    cout<<"La suma es: "<<sumar(nElementos)<<endl;


    return 0;
}


// funcion recursiva
int sumar(int n) {
    int suma = 0;
    if(n==1) {
        suma = 1;
    } else {
        suma = n + sumar(n-1);
    }
    return suma;
}