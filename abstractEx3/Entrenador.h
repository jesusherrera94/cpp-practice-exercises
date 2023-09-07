#include <iostream>
#include "Persona.h"

using namespace std;

class Entrenador: public Persona
{
private:
    string estrategia;
public:
    Entrenador(string nombre, string apellido, int edad, string estrategia):
    Persona(nombre, apellido, edad) 
    {
        this->estrategia = estrategia;
    }
    ~Entrenador(){}
    void partidoFutbol(){}
    void entrenamiento(){}
    void planificarEntrenamiento(){}
};

