#include <iostream>
#include "Alumno.h"
#include "Deportista.h"

using namespace std;

class BecadoDeporte: public Alumno, Deportista
{
private:
   float montoBeca;
public:
    BecadoDeporte(string nombreCarrera, string nombreEntrenador, float montoBeca):
    Alumno(nombreCarrera), Deportista(nombreEntrenador)
    {
        this->montoBeca = montoBeca;
    }
    ~BecadoDeporte(){}
    void mostrarDatos() {
        cout<<"Nombre Carrera: "<<Alumno::getNombreCarrera()<<endl;
        cout<<"Nombre Entrenador: "<<Deportista::getNombreEntrenador()<<endl;
        cout<<"Monto de la beca: "<<this->montoBeca<<endl;
    }
    void setMontoBeca(float incrementPercentage) {
        float incremento = (montoBeca*incrementPercentage) / 100;
        this->montoBeca += incremento;
    }
    float getNombreCarrera(){
        return this->montoBeca;
    }
};
