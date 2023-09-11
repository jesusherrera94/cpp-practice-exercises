#include <iostream>
#include "Vehiculo.h"

using namespace std;

int main() {
    Vehiculo* coches;

    int numeroVehiculos, indiceCocheBarato;
    string marca, modelo;
    float precio;

    cout<<"Digite el numero de vehiculos: ";
    cin>>numeroVehiculos;

    coches = new Vehiculo[numeroVehiculos];

    for (int i = 0; i < numeroVehiculos; i++)
    {
        fflush(stdin);
        cout<<"\nDigite los datos del vehiculo "<<(i+1)<<": "<<endl;
        cout<<"Digite la marca: ";
        getline(cin, marca);
        cout<<"Digite el modelo: ";
        getline(cin, modelo);
        fflush(stdin);
        cout<<"Digite el precio: ";
        cin>>precio;
        coches[i] = Vehiculo(marca, modelo, precio);
    }

    indiceCocheBarato = Vehiculo::indiceMasBarato(coches,numeroVehiculos);
    cout<<"El vehiculo es mas barato es: "<<endl;
    (coches+indiceCocheBarato)->mostrarDatos();

    delete[] coches;
    
    return 0;
}