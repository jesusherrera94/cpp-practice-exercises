#include <iostream>
#include "Arreglo.h"

using namespace std;
void menu();

Arreglo <char> arreglo1(5);

int main() {
    menu();
    return 0;
}

void menu() {
    int opcion;
    char elemento;
    do
    {
        cout<<"\t .:MENU:."<<endl;
        cout<<"1. Agregar nuevo elemento"<<endl;
        cout<<"2. comprobar el espacio del arreglo"<<endl;
        cout<<"3. Ver arreglo"<<endl;
        cout<<"4. Vaciar arreglo"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Digite una opcion: ";
        cin>>opcion;
        switch (opcion)
        {
        case 1:

            if(arreglo1.arregloLleno()){
                cout<<"El arreglo esta lleno"<<endl;
            } else {
                cout<<"Digite un nuevo elemento: ";
                cin>>elemento;
                arreglo1.agregar(elemento);
            }
            break;
        case 2: 
            if(arreglo1.arregloLleno()){
                cout<<"El arreglo esta lleno"<<endl;
            } else {
                cout<<"El arreglo aun no esta lleno"<<endl;
            }
            break;
        case 3: 
            cout<<"Los elementos del arreglo son: "<<endl;
           arreglo1.mostrarArreglo();
            break;
        case 4: 
            cout<<"Vaciando el arreglo..."<<endl;
            arreglo1.vaciarArreglo();
            break;
        case 5: 
            break;
        default:
        cout<<"Opcion no valida!"<<endl;
            break;
        }
    } while (opcion !=5);
}