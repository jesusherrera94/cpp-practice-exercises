#include <iostream>
#include "Felino.h"
class GatoDomestico: public Felino
{
private:
    string nombreDuenio;
public:
    GatoDomestico(int anioNacimiento, string lugarNacimiento, string raza, string nombreDuenio): 
    Felino(anioNacimiento, lugarNacimiento, raza){
        this->nombreDuenio = nombreDuenio;
    }
    ~GatoDomestico(){}
    string imprimirDieta() {
        return "La dieta del gato es con Whiskas";
    }
    void setNombreDuenio(string newNombreDuenio) {
        this->nombreDuenio = newNombreDuenio;
    }

    string getNombreDuenio() {
        return this->nombreDuenio;
    }
};
