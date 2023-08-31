#include<iostream>

using namespace std;

class Perro
{
private:
    string nombre, raza;
public:
    Perro(string nombre, string raza) {
        this->nombre = nombre;
        this->raza = raza;
    }
    void mostrarDatos();
    void jugar();
    // destructor
    ~Perro(){}
};

