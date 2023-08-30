#include <iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>

using namespace std;
void escribir ();
void leer();
struct Registro {
    char nombre[20];
    char apelido[20];
};

int main() {
    escribir();
    leer();
    return 0;
}

void escribir() {
    ofstream archivoB;

    archivoB.open("prueba.dat", ios::out | ios::binary);
    if (archivoB.fail()) {
        cout<<"No se puede crear el archivo\n";
        exit(1);
    }
    Registro persona;
    cout<<"Pidiendo los datos: \n";
    cout<<"Nombre: ";
    cin.getline(persona.nombre, 20, '\n');
    cout<<"apellido: ";
    cin.getline(persona.apelido, 20, '\n');
    //Escribimos los datos en el archivo binario
    archivoB.write((char *) &persona, sizeof(Registro));

    archivoB.close();

}

void leer() {
    ifstream archivoB;
    archivoB.open("prueba.dat", ios::in | ios::binary);
    if ( archivoB.fail()) {
        cout<<"No se puede abrir el archivo\n";
        exit(1);
    }

    Registro persona;

    archivoB.read((char *) &persona, sizeof(Registro));

    cout<<"\nMostrando los datos leidos: \n";
    cout<<"Apellido: "<<persona.apelido<<endl;
    cout<<"Nombre: "<<persona.nombre<<endl;
    archivoB.close();

}