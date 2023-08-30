#include <iostream>
#include<stdlib.h>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *der;
    Nodo *izq;
    Nodo *padre;
};
void menu();
Nodo *crearNodo(int, Nodo *);
void insertarNodo(Nodo *&, int, Nodo *);
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *, int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *, int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar (Nodo *, Nodo *);
void destruirNodo (Nodo *);
Nodo *arbol = NULL;

int main() {
    /*
    Insertar nodos en un arbol:
    1. Crear el nodo.
    Para insertar en el nodo se tiene que saber si el arbol está vació.
    */
   /*
   Mostrar 
   */
    menu();

    return 0;
}

void menu() {
    int dato, opcion, contador=0;
    do
    {
        cout<<"\t.:MENU:.\n";
        cout<<"1. Insertar un nuevo nodo\n";
        cout<<"2. Mostrar elementos del arbol\n";
        cout<<"3. Buscar valor en el arbol\n";
        cout<<"4. Recorrer el arbol en PreOrden\n";
        cout<<"5. Recorrer el arbol en InOrden\n";
        cout<<"6. Recorrer el arbol en PostOrden\n";
        cout<<"7. Eliminar un nodo del arbol\n";
        cout<<"8. salir\n";
        cout<<"Opcion: ";
        cin>>opcion;
        switch (opcion) 
        {
        case 1:
            cout<<"Digite un numero: ";
            cin>>dato;
            insertarNodo(arbol, dato, NULL);
            cout<<endl;
            break;
        case 2:
            cout<<"Mostrando los elementos del arbol: \n";
            mostrarArbol(arbol,contador);
            cout<<endl;
            break;
        case 3:
            cout<<"Digite el elemento a buscar: ";
            cin>>dato;
            if (busqueda(arbol, dato)) {
                cout<<"El elemento "<<dato<<" ha sido encontrado en el arbol\n";
            } else {
                cout<<"El elemento "<<dato<<" NO ha sido encontrado en el arbol\n";
            }
            cout<<endl;
            break;
        case 4:
            cout<<"Recorrido en preOrden: \n";
            preOrden(arbol);
            cout<<endl;
            break;
        case 5:
            cout<<"Recorrido en InOrden: \n";
            inOrden(arbol);
            cout<<endl;
            break;
        case 6:
            cout<<"Recorrido en PostOrden: \n";
            postOrden(arbol);
            cout<<endl;
            break;
        case 7:
            cout<<"Digite el nodo que quiere eliminar: ";
            cin>>dato;
            eliminar(arbol, dato);
            cout<<endl;
            break;
        default:
            break;
        }
    } while (opcion != 8);
    
}

Nodo *crearNodo(int n, Nodo *padre) {
    Nodo *nodoNuevo = new Nodo();
    nodoNuevo ->dato = n;
    nodoNuevo -> der = NULL;
    nodoNuevo -> izq = NULL;
    nodoNuevo -> padre = padre;
    return nodoNuevo;
}

void insertarNodo(Nodo *&arbol, int n, Nodo *padre) {
   if(arbol == NULL) {
        Nodo * nuevoNodo = crearNodo(n, padre);
        arbol = nuevoNodo;
   } else {
        int valorRaiz = arbol ->dato; //obtenemos el valor de raiz
        if (n<valorRaiz) {
            insertarNodo(arbol ->izq, n, arbol); //insertar en el lado izquierdo del nodo
        } else {
            insertarNodo(arbol ->der, n, arbol);
        }
   }
}

void mostrarArbol(Nodo *arbol, int contador){
    if (arbol == NULL) {
        return;
    } else {
        mostrarArbol(arbol->der, contador +1);
        for(int i=0; i<contador; i++) {
            cout<<"   ";
        }
        cout<<arbol->dato<<endl;
        mostrarArbol(arbol->izq, contador+1);
    }
}

bool busqueda(Nodo *arbol, int n) {
    if (arbol == NULL) {
        return false;
    } else if (arbol ->dato == n) {
        return true;
    } else if (n < arbol -> dato) {
        return busqueda(arbol->izq, n);
    } else {
        return busqueda(arbol->der, n);
    }
}

void preOrden(Nodo *arbol) {
    if (arbol == NULL) {
        return;
    } else {
        cout<<arbol->dato<<" - ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}

void inOrden(Nodo *arbol) {
    if ( arbol == NULL ) {
        return;
    } else {
        inOrden(arbol->izq);
        cout<<arbol->dato<<" - ";
        inOrden(arbol->der);
    }
}

void postOrden(Nodo *arbol) {
    if ( arbol == NULL ) {
        return;
    } else {
        postOrden(arbol ->izq);
        postOrden(arbol->der);
        cout<<arbol->dato<<" - ";
    }
}

void eliminar(Nodo *arbol, int n) {
    if ( arbol == NULL ){
        return;
    }
    else if (n < arbol->dato){
        eliminar(arbol->izq, n);
    } else if (n > arbol -> dato) {
        eliminar(arbol->der, n);
    } else {
        //aqui se encuentra el valor
        eliminarNodo(arbol);
    }
}

Nodo *minimo(Nodo *arbol){
    if (arbol == NULL) {
        return NULL;
    }
    if (arbol -> izq) {
        return minimo(arbol -> izq);
    } else {
        return arbol;
    }
}

void reemplazar (Nodo *arbol, Nodo *nuevoNodo){
    if (arbol->padre) {
        // arbol -> padre, asignarle su nuevo hijo
        if (arbol->dato == arbol->padre->izq->dato) {
            arbol->padre->izq = nuevoNodo;
        } else if (arbol->dato==arbol->padre->der->dato)
        {
            arbol->padre->der = nuevoNodo;
        }
        
    }
    if (nuevoNodo) {
        //Procedemos a asignarle su nuevo padre.
        nuevoNodo->padre = arbol->padre;
    }
}

void destruirNodo (Nodo *nodo) {
    nodo ->izq = NULL;
    nodo ->der = NULL;
    delete nodo;
}

void eliminarNodo(Nodo *nodoEliminar) {
    if (nodoEliminar -> izq && nodoEliminar ->der) {
        Nodo *menor = minimo(nodoEliminar->der);
        nodoEliminar ->dato = menor->dato;
        eliminarNodo(menor);
    }
    else if (nodoEliminar -> izq) {
        reemplazar(nodoEliminar, nodoEliminar->izq);
        destruirNodo(nodoEliminar);
    } else if (nodoEliminar->der) {
        reemplazar (nodoEliminar, nodoEliminar->der);
        destruirNodo(nodoEliminar);
    }
    else {
        reemplazar(nodoEliminar, NULL);
        destruirNodo(nodoEliminar);
    }
}