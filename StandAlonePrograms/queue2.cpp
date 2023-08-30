#include <iostream>

using namespace std;

struct Nodo {
    char dato;
    Nodo *siguiente;
};

void insertarCola(Nodo *&, Nodo *&, char);
void suprimirCola(Nodo *&, Nodo *&, char &);
bool colaVacia(Nodo *);
void menu();

int main() {
    menu();
    return 0;
}

void menu() {
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    char dato;
    int opcion;
    do
    {
        cout<<"\t.:MENU:.\n";
        cout<<"1. Insertar un caracter en la cola.\n";
        cout<<"2. Mostrar todos los elementos de la cola\n";
        cout<<"3. Salirn\n";
        cout<<"Opcion: ";
        cin>>opcion;
        switch (opcion)
        {
        case 1:
            cout<<"Ingrese un caracter: ";
            cin>>dato;
            insertarCola(frente, fin, dato);
            break;
        case 2:
            cout<<"\nMostrando todos los elementos de la cola: "<<endl;
            while ( frente != NULL )
            {
                suprimirCola(frente, fin, dato);
                if (frente != NULL) {
                    cout<<dato<<",";
                } else {
                    cout<<dato<<".\n";
                }
            }
            break;
        case 3:
            break;
        default:
            break;
        }
    } while (opcion != 3);
}


void insertarCola(Nodo *&frente, Nodo *&fin, char n) {
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo ->dato = n;
    nuevoNodo->siguiente = NULL;
    if(colaVacia(frente)) {
        frente = nuevoNodo;
    } else {
        fin->siguiente = nuevoNodo;
    }

    fin = nuevoNodo;
}

void suprimirCola(Nodo *&frente, Nodo *&fin, char &n){
    n = frente ->dato;
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