#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void menu();
void crearContacto();
void agregarContacto();
void visualizarContactos();

struct Datos {
    string nombre, apellido, telefono;
}datos;

int main() {
    menu();
    return 0;
}

void menu() {
    int opcion;
    do
    {
        cout<<"\tMENU"<<endl;
        cout<<"1. crear(nombre, apellidos, telefono)"<<endl;
        cout<<"2. Agregar mas contactos(nombre, apellidos, telefono)"<<endl;
        cout<<"3. Visualizar contactos existentes"<<endl;
        cout<<"4. Salir "<<endl;
        cout<<"Opcion: ";
        cin>>opcion;
        switch (opcion)
        {
        case 1:
           crearContacto();
            break;
        case 2:
            agregarContacto();
            break;
        case 3:
            visualizarContactos();
            system("read -n 1 -s -p \"Press any key to continue...\"");
            break;
        default:
            break;
        }
        system("clear");
    } while (opcion != 4);
    
}

void crearContacto() {
    ofstream archivo;
    char rpt;
    archivo.open("AgendaTelefonica.txt", ios::out); //abrimos el archivo en modo escritura
    if (archivo.fail()) {
        cout<<"No se pudo crear el archivo";
        exit(1);
    }
    archivo<<"\tAgenda telefonica"<<endl;

    do{
        fflush(stdin);
        cout<<"Digite su nombre: ";
        getline(cin, datos.nombre);
        cout<<"Digite su apellido: ";
        getline(cin, datos.apellido);
        cout<<"Digite su telefono: ";
        getline(cin, datos.telefono);
        cout<<endl;
        archivo<<"Nombre: "<<datos.nombre<<endl;
        archivo<<"Apellido: "<<datos.apellido<<endl;
        archivo<<"Telefono: "<<datos.telefono<<endl<<endl;

        cout<<"Desea agregar otro contacto(s/n): ";
        cin>>rpt;
    } while ( rpt == 's' || rpt == 'S' );

    archivo.close(); // cerramos el archivo.
}

void agregarContacto() {
    ofstream archivo;
    char rpt;
    archivo.open("AgendaTelefonica.txt", ios::app); //abrimos el archivo en modo agregar
    if (archivo.fail()) {
        cout<<"No se pudo crear el archivo";
        exit(1);
    }
    do{
        fflush(stdin);
        cout<<"Digite su nombre: ";
        getline(cin, datos.nombre);
        cout<<"Digite su apellido: ";
        getline(cin, datos.apellido);
        cout<<"Digite su telefono: ";
        getline(cin, datos.telefono);
        cout<<endl;
        archivo<<"Nombre: "<<datos.nombre<<endl;
        archivo<<"Apellido: "<<datos.apellido<<endl;
        archivo<<"Telefono: "<<datos.telefono<<endl<<endl;

        cout<<"Desea agregar otro contacto(s/n): ";
        cin>>rpt;
    } while ( rpt == 's' || rpt == 'S' );

    archivo.close(); // cerramos el archivo.
}

void visualizarContactos() {
    ifstream archivo;
    string texto;
    archivo.open("AgendaTelefonica.txt", ios::in); //abrimos el archivo en modo lectura
    if (archivo.fail()) {
        cout<<"No se pudo crear el archivo";
        exit(1);
    }
    while (!archivo.eof())
    {
        getline(archivo, texto);
        cout<<texto<<endl;
    }
    archivo.close(); // cerramos el archivo.
}