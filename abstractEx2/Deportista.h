#ifndef DEPORTISTA_H
#define DEPORTISTA_H
#include <iostream>

using namespace std;

class Deportista
{
private:
    string nombreEntrenador;
public:
    Deportista(string nombreEntrenador) {
        this->nombreEntrenador = nombreEntrenador;
    }
    ~Deportista(){}
    void mostrarDatos() {
        cout<<"Nombre Del entrenador: "<<nombreEntrenador<<endl;
    }
    void setNombreEntrenador(string newNombreEntrenador) {
        this->nombreEntrenador = newNombreEntrenador;
    }
    string getNombreEntrenador(){
        return this->nombreEntrenador;
    }
};

#endif