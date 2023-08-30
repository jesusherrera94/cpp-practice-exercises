#include <iostream>

using namespace std;

struct Persona
{
    char nombre[30];
    int edad;
    // asignacion de punteros en struct
}persona, *punteroPersona = &persona;

void pedirDatos();
void mostrarDatos(Persona *);

int main() {
    pedirDatos();
    mostrarDatos(punteroPersona);
    return 0;
}


void pedirDatos() {
    cout<<"Digite su nombre: ";
    // se accede a los campos del struct via puntero usando flechas
    cin.getline(punteroPersona->nombre, 30, '\n');
    fflush(stdin);
    cout<<"Digite su edad: ";
    cin>>punteroPersona->edad;
}

void mostrarDatos(Persona *punteroPersona){
    cout<<"Su numbre: "<<punteroPersona->nombre<<endl;
    cout<<"Su edad: "<<punteroPersona->edad<<endl;
}