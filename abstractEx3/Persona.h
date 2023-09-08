#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;
class Persona
{
private:
protected:
    string nombre;
    string apellido;
    int edad;
public:
    Persona(string nombre, string apellido, int edad){
        this->nombre = nombre;
        this->apellido = apellido;
        this->edad = edad;
    }
    ~Persona(){}
    void viajar(){
        cout<<"Viajar"<<endl;
    }
    virtual void partidoFutbol() = 0;
    virtual void entrenamiento() = 0;
    string getNombre() {
        return this->nombre;
    }
    string getApellido() {
        return this->apellido;
    }
    int getEdad() {
        return this->edad;
    }
};
#endif