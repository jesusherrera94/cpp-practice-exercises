#include <iostream>
#include "mayor.h"
using namespace std;


int main() {
    cout<<"El mayor de dos numeros enteros es: "<<mayor(5,9)<<endl;
    cout<<"El mayor de dos numeros reales es: "<<mayor(9.87,4.56)<<endl;
    cout<<"El mayor de dos caracteres es: "<<mayor('r','z')<<endl;
    // cout<<"El mayor de dos numeros enteros es: "<<mayor(5,9.76)<<endl; <- este es un error porque T tiene el mismo tipo de datos
    // se puede corregir con otro template
    cout<<"El mayor de dos numeros enteros es: "<<mayor(5,9.97)<<endl;
    return 0;
}