#include<iostream>
#include "Alumno.h"

using namespace std;

void Alumno::pedirDatos() {
    cout<<"Digitar calificacion de matematicas: ";
    cin>>calMate;
    cout<<"Digitar calificacion de programacion: ";
    cin>>calProgra;
}

void Alumno::mostrarNotas () {
    cout<<"Nota de matematica: "<<calMate<<endl;
    cout<<"Nota programacion: "<<calProgra<<endl;
    cout<<"Promedio: "<<(calMate+calProgra) / 2 <<endl;
}