#include <iostream>

using namespace std;

int main() {

    int num, *dirNum;

    num = 20;

    cout<<"Numero: "<<num<<endl;
    // &: direccion de memoria de variable
    cout<<"Direccion de memoria: "<<&num<<endl;
    // agregando la posicion de memoria
    dirNum = &num;

    // se imprime el valor de la variable original usando * antes de la variable
    cout<<" p Numero: "<<*dirNum<<endl;
    // &: direccion de memoria de variable
    cout<<"Direccion de memoria: "<<dirNum<<endl;
    // direccion de memoria de la variable puntero
    cout<<"Direccion de memoria p: "<<&dirNum<<endl;

    
    return 0;
}