#include <iostream>
#include "GatoDomestico.h"
#include "Felino.h"

using namespace std;

int main() {
    GatoDomestico* minino = new GatoDomestico(2012, "Tegucigalpa", "Persa", "Jesus");
    Felino* estrellaCirco = new Felino(2014, "India", "Vengala", "Espectacular");
    cout<<"Dietas: \n";
    cout<<"Gato: "<<minino->imprimirDieta()<<endl;
    cout<<"Felino: "<<estrellaCirco->imprimirDieta()<<endl;
    cout<<"Anio nacimiento - lugar nacimiento: \n";
    cout<<"Gato: "<<minino->getAnioNacimiento()<<" - "<<minino->getLugarNacimiento()<<endl;
    cout<<"Felino: "<<estrellaCirco->getAnioNacimiento()<<" - "<<estrellaCirco->getLugarNacimiento()<<endl;
    cout<<"Cambiando el nombre del duenio del gato: "<<endl;
    string nuevoDuenio;
    cout<<"Digite el nombre del nuevo duenio: ";
    getline(cin, nuevoDuenio);
    minino->setNombreDuenio(nuevoDuenio);
    cout<<"Nuevo duenio: "<<minino->getNombreDuenio()<<endl;
    cout<<"Raza: \n";
    cout<<"Gato: "<<minino->getRaza()<<endl;
    cout<<"Felino: "<<estrellaCirco->getRaza()<<endl;

    cout<<"Cambiando el nombre del circo de estrella de circo: \n";
    string nuevoCirco;
    cout<<"Digite el nombre del nuevo circo: ";
    getline(cin, nuevoCirco);
    estrellaCirco->setNombreCirco(nuevoCirco);
    cout<<"El nuevo circo es: "<<estrellaCirco->getNombreCirco()<<endl;
    delete minino;
    delete estrellaCirco;
    return 0;
}