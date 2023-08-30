#include<iostream>

using namespace std;

void intercambiar(int&, int&);

int main() {
    int num1 = 10, num2 = 15;
    cout<<"el valor de primer numero es: "<<num1<<endl;
    cout<<"el valor de segundo numero es: "<<num2<<endl;
    intercambiar(num1, num2);
    cout<<"el nuevo valor de primer numero es: "<<num1<<endl;
    cout<<"el nuevo valor de segundo numero es: "<<num2<<endl;

    return 0;
}


void intercambiar(int& num1, int& num2){
    int aux;
    aux = num1;
    num1 = num2;
    num2 = aux;
}