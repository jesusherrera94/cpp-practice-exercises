#include <iostream>
#include "Expediente.h"
#include "Direccion.h"

using namespace std;

class Estudiante
{
private:
    string codigo;
    float promedio;
    Expediente exp;
    Direccion dir;

public:
    Estudiante(string codigo, 
    float promedio,
    int nroExpediente,
    string direccion) //initizializar constructores de otras clases
    : exp(nroExpediente), 
      dir(direccion)
    {
        this->codigo = codigo;
        this->promedio = promedio;
        
    }
    void mostrarDatos() {
        cout<<"Codigo: "<<codigo<<endl;
        cout<<"Promedio: "<<promedio<<endl;
        cout<<"Numero de expediente: "<<exp.getNroExpediente()<<endl;
        cout<<"Direccion del alumno: "<<dir.getDireccion()<<endl;
        cout<<endl;
    }
    ~Estudiante();
};


