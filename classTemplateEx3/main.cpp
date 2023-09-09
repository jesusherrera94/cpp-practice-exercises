#include <iostream>
#include "Materia.h"
using namespace std;

int main() {
    Materia<int> curso1("Algoritmos", 1,15);
    Materia<float> curso2("Matematicas", 2,18.89);
    Materia<char> curso3("Lenguaje", 3,'A');
    cout<<"Mostrando los datos del curso 1: "<<endl;
    curso1.mostrarDatos();
    cout<<"Mostrando los datos del curso 2: "<<endl;
    curso2.mostrarDatos();
    cout<<"Mostrando los datos del curso 3: "<<endl;
    curso3.mostrarDatos();

    curso1.setCalificacion(19);

    cout<<"Mostrando la nueva calificacion del curso 1: "<<curso1.getCalificacion()<<endl;


    return 0;
}