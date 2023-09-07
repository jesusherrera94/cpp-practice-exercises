#include <iostream>
#include "Persona.h"

using namespace std;

class Medico: public Persona
{
private:
    int aniosExperiencia;
    string titulacion;
public:
    Medico(string nombre, string apellido, int edad, int aniosExperiencia, string titulacion):
    Persona(nombre, apellido, edad) 
    {
        this->aniosExperiencia = aniosExperiencia;
        this->titulacion = titulacion;
    }
    ~Medico(){}
    void partidoFutbol(){}
    void entrenamiento(){}
    void curarLesion(){}
};

