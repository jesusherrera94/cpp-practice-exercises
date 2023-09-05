#include <iostream>
#include "Turismo.h"
#include "Deportivo.h"
#include "Furgoneta.h"

using namespace std;

int main() {
    cout<<"-------- Herencia Publica ------\n";
    Turismo* t1 = new Turismo("Toyota", "negro", "GH89", 4);

    cout<<"Color: "<<t1->getColor()<<endl;
    t1->setColor("rojo");
    cout<<"Color: "<<t1->getColor()<<endl;
    cout<<"Modelo: "<<t1->returnModel()<<endl;
    cout<<"-------- Herencia Privada ------\n";
    Deportivo* d1 = new Deportivo("Audi", "Blanco", "KP98", 10);
    cout<<"Cilindrada: "<<d1->getCilindrada()<<endl;
   // cout<<"Marca: "<<d1->getMarca()<<endl; <- esto es inaccesible.
   cout<<"Marca: "<<d1->reportarMarca()<<endl;
    delete d1;
    cout<<"-------- Herencia Protected ------\n";
    Furgoneta* f1 = new Furgoneta("Kia", "Verde", "AS12", 1200);
    cout<<"Carga: "<<f1->getCarga()<<endl;
    // cout<<"Color: "<<f1->getColor()<<endl; <- esto es inaccesible.
    cout<<"Color: "<<f1->obtenerColor()<<endl;
    delete f1;
    return 0;
}