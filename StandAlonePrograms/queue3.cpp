#include <iostream>
#include<stdlib.h>

using namespace std;

struct Cliente {
    char nombre[30];
    char clave[10];
    int edad;
};

struct Nodo {
    Cliente c;
    Nodo *siguiente;
};

void cargarClientes(Cliente &);
void insertarCola(Nodo *&, Nodo *&, Cliente);
void suprimirCola(Nodo *&, Nodo *&, Cliente &);
bool colaVacia(Nodo *);

int main() {
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    Cliente c;
    char rpt;
    do
    {
        cargarClientes(c); //cargar los datos para el cliente
        insertarCola(frente, fin, c); // agregar un nuevo cliente a la cola
        cout<<"Desea agregar un nuevo cliente?[S/n]: ";
        cin>>rpt;
    } while ((rpt=='s') || (rpt =='S'));
    cout<<"\n ====CARGA DE CLIENTES EXITOSA!===\n";
    while ( frente != NULL )
            {
                suprimirCola(frente, fin, c);
                cout<<"\t***Datos usuario**\n";
                cout<<"nombre: "<<c.nombre<<endl;
                cout<<"Clave: "<<c.clave<<endl;
                cout<<"Edad: "<<c.edad<<endl;
                cout<<"\t******************\n";
            }
    cout<<"\t+++FIN+++\n";
    return 0;
}

void cargarClientes(Cliente &c) {
    fflush(stdin);
    cout<<"\tAgregar nuevo cliente\n";
    cout<<"Digite su nombre: ";
    cin.getline(c.nombre, 30, '\n');
    cout<<"Clave: ";
    cin.getline(c.clave, 10, '\n');
    cout<<"Edad: ";
    cin>>c.edad;
    cout<<"\n";
}


void insertarCola(Nodo *&frente, Nodo *&fin, Cliente c) {
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo ->c = c;
    nuevoNodo->siguiente = NULL;
    if(colaVacia(frente)) {
        frente = nuevoNodo;
    } else {
        fin->siguiente = nuevoNodo;
    }

    fin = nuevoNodo;
}

void suprimirCola(Nodo *&frente, Nodo *&fin, Cliente &c){
    c = frente ->c;
    Nodo *aux = frente;
    if (frente == fin) {
        frente = NULL;
        fin = NULL;
    }
    else {
        frente = frente->siguiente;
    }
    delete aux;
}

bool colaVacia(Nodo *frente) {
    return (frente == NULL);
}