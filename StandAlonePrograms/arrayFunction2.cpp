#include <iostream>

using namespace std;

void pedirDatos ();
void comprobarOrdenamiento (int vec[], int);

int vec[100], tam;

int main() {
    pedirDatos();
    comprobarOrdenamiento(vec, tam);
    return 0;
}


void pedirDatos() {
    cout<<"Digite el numero de elementos del vector: ";
    cin>>tam;
    for (int i = 0; i < tam; i++)
    {
        cout<<i+1<<". Digite un numero: ";
        cin>>vec[i];
    }
    
}

void comprobarOrdenamiento (int vec[], int tam){
    char bandera = 'F';
    int i=0;
    while((bandera == 'F')&&(i<tam-1)) {
        if (vec[i]>vec[i+1]) {
            bandera = 'V';
        }
        i++;
    }

    if (bandera == 'F') {
        cout<<"El arreglo esta ordenado crecientemente"<<endl;
    } else {
        cout<<"El arreglo NO esta ordenado crecientemente"<<endl;
    }
}