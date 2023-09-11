#include <iostream>

using namespace std;
void mergesort(int [], int, int);
void mezcla(int [], int , int , int );

int main() {
    
    int arreglo[] = {5,7,87,1,3,9};

    mergesort(arreglo, 0, 5);

    for (int i = 0; i < 6; i++)
    {
        cout<<arreglo[i]<<endl;
    }
    

    return 0;
}

void mergesort(int a[], int primero, int ultimo) {
    int central;
    if (primero<ultimo) {
        central = (primero+ultimo)/2;
        mergesort(a, primero, central); // ordernar la primera mitad
        mergesort(a, central+1, ultimo);
        mezcla(a, primero, central, ultimo);
    }
}

void mezcla(int a[], int izquierda, int medio, int derecha) {
    int* aux;
    int i,k,z;
    aux = new int(derecha-izquierda+1);
    i=z=izquierda;
    k=medio+1;
    while (i<=medio && k<=derecha)
    {
        if(a[i]<=a[k]) {
            aux[z++] = a[i++];
        } else {
            aux[z++] = a[k++];
        }
    }
    while (i<=medio)
    {
        aux[z++] = a[i++];
    }
    while (k<=derecha)
    {
        aux[z++] = a[k++];
    }
    
    for (int i = izquierda; i <= derecha; i++)
    {
        a[i] = aux[i];
    }
    delete aux;
}