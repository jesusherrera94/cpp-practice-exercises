#include <iostream>

using namespace std;
// solucion recursiva
int sumaRecursiva(int n) {
    if(n<=9) { //caso base
        return n;
    } else { // caso recursivo
        return sumaRecursiva(n/10) + n%10;
    }
}

// solucion iterativa

int sumaIterativa(int n) {
    int suma = 0;
    while(n > 9) {
        suma += n%10;
        n /=10;
    }
    return (suma+n);
}

int main() {
    int numero;
    cout<<"Digite un numero: ";
    cin>>numero;

    cout<<"La suma de los digitos del numero es: "<<endl;
    cout<<"Algoritmo recursivo: "<<sumaRecursiva(numero)<<endl;
    cout<<"Algoritmo iterativo: "<<sumaIterativa(numero)<<endl;
    return 0;
}