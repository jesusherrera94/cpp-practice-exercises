// Guardian de inclusion multiple
// Este sirve para poder incluir la clase en multiples archivos
#ifndef VEHICULO_H
#define VEHICULO_H

#include <iostream>

using namespace std;

class Vehiculo
{
private:
    string marca;
    string color;
protected:
    string modelo;
    string getModelo() {
        return this->modelo;
    }
public:
    Vehiculo(string marca, string color, string modelo){
        this->marca = marca;
        this->color = color;
        this->modelo = modelo;
    }
    ~Vehiculo(){}

    string getMarca() {
        return marca;
    }
    string getColor() {
        return this->color;
    }
    void setColor(string color) {
        this->color = color;
    }
};

#endif //Fin de guardian