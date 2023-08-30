#include<iostream>

using namespace std;

void valNuevo(int&, int&);

int main() {
    int num1, num2;
    cout<<"digite dos numeros: ";
    cin>>num1>>num2;
    valNuevo(num1, num2);
    cout<<"el nuevo valor de primer numero es: "<<num1<<endl;
    cout<<"el nuevo valor de segundo numero es: "<<num2<<endl;
    return 0;
}

//paso por referencia es unsando el & antes del tipo de dato.
void valNuevo(int& xnum, int& ynum) {
    cout<<"el valor de primer numero es: "<<xnum<<endl;
    cout<<"el valor de segundo numero es: "<<ynum<<endl;
    xnum = 89;
    ynum = 41;
}