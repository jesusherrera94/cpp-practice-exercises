#include <iostream>

using namespace std;

struct Nodo {
    char dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, char);
void sacarPila(Nodo *&, char &);
void menu();

int main() {
    menu();
    return 0;
}

void menu(){
    Nodo *pila = NULL;
    int opcion;
    char dato;
    do {
        cout<<"\t .:MENU:.\n";
        cout<<"1. Insertar un character a la pila"<<endl;
        cout<<"2. Mostrar todos los elementos de la pila"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Opcion: "; 
        cin>>opcion;
        switch (opcion)
        {
        case 1:
            cout<<"\nDigite un caracter: ";
            cin>>dato;
            agregarPila(pila, dato);
            break;
        case 2:
            cout<<"\n Sacando todos los elementos de una pila: \n";
            while(pila != NULL) { //mientras no sea el final de la pila
                sacarPila(pila, dato);
                if(pila != NULL) {
                    cout<<dato<<" , ";
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
    }while(opcion !=3);
};

void agregarPila(Nodo *&pila, char n) {
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = n;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;
}

void sacarPila(Nodo *&pila, char &n) {
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}