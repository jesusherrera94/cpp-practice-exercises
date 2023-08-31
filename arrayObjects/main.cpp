#include <iostream>
#include "Alumno.h"

using namespace std;

int main() {
    Alumno alumnos[4]; //creacion de arreglo de objetos estatico

    Alumno* alumnos2 = new Alumno[3]; //creacion de arreglo de objetos dinamicos

    for (int i = 0; i < 3; i++)
    {
        (alumnos2+i)->pedirDatos();
        cout<<endl;
    }
    
    cout<<"Mostrando las notas\n";

    for (int i = 0; i < 3; i++)
    {
        (alumnos2+i)->mostrarNotas();
    }
    

    return 0;
}