#include<iostream>

using namespace std;
// se pasa el valor del vector indicando entre corchetes []
void cuadrado(int []);
void muestra (int vec[], int tam);
int main() {
    const int tam = 5;
    int vec [tam] = {1,2,3,4,5};
    cuadrado(vec);
    muestra(vec, tam);
    return 0;
}

void cuadrado(int vec[]){
    for(int i = 0; i<5; i++) {
        vec[i] *= vec[i];
    }
}

void muestra (int vec[], int tam){
    for(int i = 0; i<tam; i++) {
        cout<<vec[i]<<" "<<endl;
    }
}