#include <iostream>

using namespace std;

int potencia(int, int);

int main() {
    int base, exponente;
    cout<<"Digite la base: "; cin>>base;
    cout<<"Digite el exponente: "; cin>>exponente;

    cout<<"La potencia de "<<base<< " elevado a "<<exponente<< " = "<<potencia(base, exponente)<<endl;

    return 0;
}

int potencia(int x, int y) {
    if (y==1) {
        return x;
    } else {
        return x * potencia(x, y-1);
    }
}