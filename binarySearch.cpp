#include <iostream>

using namespace std;

int busquedaBinaria(int [], int, int, int);

int main() {
    int arreglo[] = {3,4,5,8,9,10};
    int dato = 12;
    int retorno = busquedaBinaria(arreglo, dato, 0, 5);
    if (retorno == -1) {
        cout<<"Dato no ha sido encontrado\n";
    } else {
        cout<<"El dato si ha sido encontrado: \n";
        cout<<"Posicion: "<<retorno<<endl;
    }
    return 0;
}

int busquedaBinaria(int a[], int dato, int inferior, int superior) {
    int mitad;
    if (inferior > superior) { // no encontrado
        return -1;
    } else {
        mitad = (inferior + superior)/2;
        if (dato == a[mitad]) { // caso base10
            return mitad;
        } else if (dato>a[mitad]) {
            return busquedaBinaria(a, dato, mitad+1, superior);
        } else {
            return busquedaBinaria(a, dato, inferior, mitad-1);
        }
    }
}