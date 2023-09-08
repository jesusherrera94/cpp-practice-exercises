#include <iostream>

#include "Persona.h"
#include "Futbolista.h"
#include "Entrenador.h"
#include "Medico.h"

using namespace std;

void menu();
void viajarEquipo();
void hacerEntrenamiento();
void partidoFutbolE();
void planificarEntrenamientoDelEquipo();
void darEntrevista();
void curarLesionFutbolista();
Persona* equipo[4];

int main() {
    equipo[0] = new Futbolista("Gonzalo","Higuain",30,9, "Delantero");
    equipo[1] = new Futbolista("Paulo","Dybala",24,10,"Delantero");
    equipo[2] = new Entrenador("Massimiliano","Allegri",50,"Defensiva");
    equipo[3] = new Medico("Alex", "Marroni", 59, "Fisioterapeuta",20);
    menu();
    return 0;
}

void menu() {
    int opcion;
    do
    {
        cout<<"\t .:MENU:."<<endl;
        cout<<"1. Viaje en equipo"<<endl;
        cout<<"2. Entrenamiento"<<endl;
        cout<<"3. Partido de futbol"<<endl;
        cout<<"4. Planificar entrenamiento"<<endl;
        cout<<"5. Entrevista"<<endl;
        cout<<"6. Curar lesion"<<endl;
        cout<<"7. Salir"<<endl;
        cout<<"Digite una opcion: ";
        cin>>opcion;
        switch (opcion)
        {
        case 1: //Viaje en equipo
            viajarEquipo();
            break;
        case 2: //Entrenamiento
            hacerEntrenamiento();
            break;
        case 3: //Partido de futbol
            partidoFutbolE();
            break;
        case 4: //Planificar el entrenamiento
            planificarEntrenamientoDelEquipo();
            break;
        case 5: //Entrevista
            darEntrevista();
            break;
        case 6: //Curar lesion
            curarLesionFutbolista();
            break;
        case 7:
            break;
        default:
        cout<<"Opcion no valida!"<<endl;
            break;
        }
    } while (opcion !=7);
    
}

void viajarEquipo() {
    for (int i = 0; i < 4; i++)
    {
        cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" -> ";
        equipo[i]->viajar();
    } 
}

void hacerEntrenamiento() {
    for (int i = 0; i < 4; i++)
    {
        cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" -> ";
        equipo[i]->entrenamiento();
    } 
}

void partidoFutbolE() {
    for (int i = 0; i < 4; i++)
    {
        cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" -> ";
        equipo[i]->partidoFutbol();
    } 
}

void planificarEntrenamientoDelEquipo(){
    cout<<equipo[2]->getNombre()<<" "<<equipo[2]->getApellido()<<" -> ";
    // Downcasting  
    ((Entrenador*)equipo[2])->planificarEntrenamiento();
}

void darEntrevista() {
    for (int i = 0; i < 2; i++)
    {
        cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" -> ";
        ((Futbolista*)equipo[i])->entrevista();
    } 
}

void curarLesionFutbolista() {
    cout<<equipo[3]->getNombre()<<" "<<equipo[3]->getApellido()<<" -> ";
    // Downcasting  
    ((Medico*)equipo[3])->curarLesion();
}