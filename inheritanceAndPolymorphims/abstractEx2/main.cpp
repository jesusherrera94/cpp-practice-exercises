#include <iostream>
#include "Alumno.h"
#include "Deportista.h"
#include "BecadoDeporte.h"

using namespace std;

int main() {
    Alumno* alumnoJuan = new Alumno("Informatica");
    Alumno* alumnoPedro = new Alumno("Ing en sistemas");
    Deportista* deporLuis = new Deportista("Popeye");
    BecadoDeporte* bdAna = new BecadoDeporte("Admin", "Luis", 1200);
    BecadoDeporte* dbCarmen = new BecadoDeporte("Conta", "La Roca", 1350);
    cout<<"Mostrando datos: "<<endl;
    cout<<"Mostrando datos de alumno juan: "<<endl;
    alumnoJuan->mostrarDatos();
    cout<<"Mostrando datos de alumno Pedro: "<<endl;
    alumnoPedro->mostrarDatos();
    cout<<"Mostrando datos de alumno Luis: "<<endl;
    deporLuis->mostrarDatos();
    cout<<"Mostrando datos de alumno Ana: "<<endl;
    bdAna->mostrarDatos();
    cout<<"Mostrando datos de alumno Carmen: "<<endl;
    dbCarmen->mostrarDatos();

    string nuevaCarrera;
    cout<<"Digite el nombre de la carrera de alumno Juan: ";
    getline(cin, nuevaCarrera);
    alumnoJuan->setNombreCarrera(nuevaCarrera);
    cout<<"Digite el nombre de la carrera de alumno Ana: ";
    getline(cin, nuevaCarrera);
    bdAna->setNombreCarrera(nuevaCarrera);

    fflush(stdin);

    cout<<"La nueva carrera de alumno Juan es: "<<alumnoJuan->getNombreCarrera()<<endl;
    cout<<"La nueva carrera de alumno Ana es: "<<bdAna->getNombreCarrera()<<endl;

    string nuevoEntrenador;
    cout<<"Digite el nombre del entrenador de Luis: ";
    getline(cin, nuevoEntrenador);
    deporLuis->setNombreEntrenador(nuevoEntrenador);
    cout<<"Digite el nombre del entrenador de Carmen: ";
    getline(cin, nuevoEntrenador);
    dbCarmen->setNombreEntrenador(nuevoEntrenador);
    cout<<"El nuevo entrenador de alumno Luis es: "<<deporLuis->getNombreEntrenador()<<endl;
    cout<<"El nuevo entrenador de alumno Carmen es: "<<dbCarmen->getNombreEntrenador()<<endl;

    fflush(stdin);

    float incremento;

    cout<<"Digite el porcentage de incremento de Ana: ";
    cin>>incremento;
    bdAna->setMontoBeca(incremento);

    cout<<"Digite el porcentage de incremento de Carmen: ";
    cin>>incremento;
    dbCarmen->setMontoBeca(incremento);

    cout<<"El nuevo monto de beca de Ana es: "<<bdAna->getMontoBeca()<<endl;
    cout<<"El nuevo monto de beca de Carmen es: "<<dbCarmen->getMontoBeca()<<endl;

    delete alumnoJuan;
    delete alumnoPedro;
    delete deporLuis;
    delete bdAna;
    delete dbCarmen;
    return 0;
}