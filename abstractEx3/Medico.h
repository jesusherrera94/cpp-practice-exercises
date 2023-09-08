#include <iostream>
#include "Persona.h"

using namespace std;

class Medico: public Persona
{
private:
    int aniosExperiencia;
    string titulacion;
public:
    Medico(string nombre, string apellido, int edad, string titulacion, int aniosExperiencia):
    Persona(nombre, apellido, edad) 
    {
        this->aniosExperiencia = aniosExperiencia;
        this->titulacion = titulacion;
    }
    ~Medico(){}
    void partidoFutbol(){
        cout<<"Da la asistencia en el partido de futbol"<<endl;
    }
    void entrenamiento(){
        cout<<"Da la asistencia en el entrenamiento"<<endl;
    }
    void curarLesion(){
        cout<<"Curar lesion"<<endl;
    }
};

