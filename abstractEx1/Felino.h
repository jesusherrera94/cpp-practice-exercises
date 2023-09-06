#ifndef FELINO_H
#define FELINO_H
#include <iostream>
#include "Mamifero.h"

using namespace std;

class Felino: public Mamifero
{
private:
    string nombreCirco;
public:
    Felino(int anioNacimiento, string lugarNacimiento, string raza, string nombreCirco):
    Mamifero(anioNacimiento, lugarNacimiento, raza) {
        this->nombreCirco = nombreCirco;
    }
    Felino(int anioNacimiento, string lugarNacimiento, string raza):
    Mamifero(anioNacimiento, lugarNacimiento, raza) {}
    ~Felino(){}
    string imprimirDieta() {
        return "Dieta de felino es a base de carne";
    }

    void setNombreCirco(string newNombreCirco) {
        this->nombreCirco = newNombreCirco;
    }
    string getNombreCirco() {
        return this->nombreCirco;
    }

};

#endif