#include <iostream>

using namespace std;

struct Alumno
{
    char nombre[30];
    int edad;
    float promedio;
}alumnos[3], *punteroAlumnos = alumnos;

void pedirDatos();
void calcularMejorPromedio(Alumno *);

int main() {
    pedirDatos();
    calcularMejorPromedio(punteroAlumnos);
    return 0;
}

void pedirDatos() {
    cout<<"Ingrese los datos del usuario \n";
    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);
       cout<<"Ingrese el nombre: ";
       cin.getline((punteroAlumnos+ i)->nombre, 30, '\n');
       cout<<"Digite su edad: ";
       cin>>(punteroAlumnos+i)->edad;
       cout<<"Digite su promedio: ";
       cin>>(punteroAlumnos+i)->promedio;
       cout<<endl;
    }
    
}

void calcularMejorPromedio(Alumno *punteroAlumnos) {
    float mayor = 0.0;
    int pos = 0;

    for (int i = 0; i < 3; i++)
    {
        if ((punteroAlumnos+i)->promedio > mayor)
        {
            mayor = (punteroAlumnos + i) ->promedio;
            pos = i;
        }
    }
    
    cout<<"Los datos del mejor alumno son: \n";

    cout<<"Nombre: "<<(punteroAlumnos+pos)->nombre<<endl;
    cout<<"Edad: "<<(punteroAlumnos+pos)->edad<<endl;
    cout<<"Promedio: "<<(punteroAlumnos+pos)->promedio<<endl;


}