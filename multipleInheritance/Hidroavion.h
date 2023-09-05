#include <iostream>
#include "Barco.h"
#include "Avion.h"

using namespace std;


class Hidroavion: public Barco, public Avion
{
private:
   string codigo;
public:
    Hidroavion(string nombre, string modelo, string codigo): Barco(nombre), Avion(modelo){
        this->codigo = codigo;
    }
    ~Hidroavion(){}
    string getCodigo() {
        return this->codigo;
    }
    void mostrarDatos() {
        cout<<"Nombre: "<<getNombre()<<endl;
        cout<<"Modelo: "<<getModelo()<<endl;
        cout<<"Codigo: "<<this->codigo<<endl;
    }
};



