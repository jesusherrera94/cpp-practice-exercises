#include <iostream>
#include "Vehiculo.h"

using namespace std;

class Turismo : public Vehiculo
{
private:
    int nPuertas;
public:
    Turismo(string marca, string color, string modelo, int nPuertas) : Vehiculo(marca, color, modelo) {
        this->nPuertas = nPuertas;
    }
    ~Turismo(){}
    int getNPuertas() {
        return this->nPuertas;
    }

    string returnModel() {
        return getModelo();
    }
};

