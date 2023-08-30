#include <iostream>

using namespace std;

int main() {
    int num, *dirNum;

    cout<<"Digite un numero: "; cin>>num;
    dirNum = &num; //guardando la posicion de memoria

    if ( *dirNum % 2 == 0 ) {
        cout<<"El numero "<<*dirNum<<" es par \n";
        cout<<"Posicion: "<<dirNum<<endl;
    } else {
        cout<<"El numero: "<<*dirNum<<" es impar \n";
        cout<<"Posicion: "<<dirNum<<endl;
    }

    return 0;
}