#include <iostream>

using namespace std;

int main() {
    
    int num, *dirNum, cont = 0;

    cout<<"Digite un numero: "; cin>>num;
    dirNum = &num;

    for (int i = 1; i < *dirNum; i++)
    {
        if(*dirNum % i == 0) {
            cont ++;
        }
    }
    
    if (cont > 2) {
        cout<<"El numero: "<<*dirNum<<" no es primo\n";
        cout<<"Posicion: "<<dirNum<<endl;
    } else {
        cout<<"El numero: "<<*dirNum<<" ES PRIMO\n";
        cout<<"Posicion: "<<dirNum<<endl;
    }

    return 0;
}