#include <iostream>
#include<stdlib.h>

using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;
};
void menu();
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void buscarLista(Nodo *, int);
void eliminarNodo(Nodo *&, int);
void eliminarLista(Nodo *&, int &);
Nodo *lista = NULL;

int main() {
    /*
    insertar elementos en una lista:
    1. Crear un nuevo nodo.
    2. Asignar a nuevoNodo ->dato el elemento que queremos incluir en la lista.
    3. crear dos nodos auxiliares y asignar lista al primero de ellos.
    4. Insertar el elemento a la lista.
        4.1 Cuando lista es null.
        4.2 Cuando la lista tiene un nodo(agregar al inicio o al final).
        4.3 Dos o mas nodo(Que se agrega en cualquier parte de la lista).
        .2 y .3 se agrupan en un solo bloque.
    */
   /*
   Mostrar elementos de una lista:
   1. Crear un nuevo nodo(actual)
   2. Igualar ese nuevo nodo(actual) a la lista.
   3. Recorrer la lista de inicio a fin.
   */
  /*
  Buscar elementos de una lista:
  1. Crear un nuevo nodo(actual).
  2. Igualar ese nuevo nodo(actual) a la lista.
  3. recorrer a la lista.
  4 Determinar si el elemento existe o no en la lista.
  */
 /*
Eliminar un elemento X de una lista:
 1. Preguntar si la lista no esta vacia.
 2. Crear un *auxBorrar y *anterior = NULL
 3. Igualar *auxBorrar al inicio de la lista.
 4. Recorrer la lista.
 5. Eliminar el elemento.
 */
/*
Eliminar todos los elementos de una lista:
1. Crear un nodo *aux e igualarlo al inicio de la lista.
2. Guardar el dato que queremos eliminar dentro de *aux->
3. Pasar lista a siguiente nodo.
4. Eliminar aux.
*/
   menu();
    return 0;
}

void menu(){
    int opcion, dato;
    do
    {
        cout<<"\t.:MENU:.\n";
        cout<<"1. Insertar elementos a la lista\n";
        cout<<"2. Mostrar elementos a la lista\n";
        cout<<"3. Buscar valor en lista\n";
        cout<<"4. Eliminar un elemento\n";
        cout<<"5. Eliminar todos los elementos \n";
        cout<<"6. salir\n";
        cout<<"Opcion: ";
        cin>>opcion;
        switch (opcion)
        {
        case 1:
            cout<<"Ingrese un numero: ";
            cin>>dato;
            insertarLista(lista, dato);
            break;
        case 2:
            cout<<"Mostrando elementos de la lista>\n";
            mostrarLista(lista);
            cout<<endl;
            break;
        case 3:
            cout<<"Ingrese un numero a buscar: ";
            cin>>dato;
            buscarLista(lista, dato);
            cout<<endl;
            break;
        case 4:
            cout<<"Ingrese un numero a Eliminar: ";
            cin>>dato;
            eliminarNodo(lista, dato);
            cout<<endl;
            break;
        case 5:
            cout<<"Eliminando los datos de la lista: \n";
            while (lista != NULL)
            {
                eliminarLista(lista, dato);
                cout<<dato<<"->";
            }            
            cout<<endl;
            break;
        case 6:
            break;
        default:
            break;
        }
    } while (opcion!=6); 
}

void insertarLista(Nodo *&lista, int n){
    Nodo *nodoNuevo = new Nodo();
    nodoNuevo->dato = n;
    Nodo *aux1 = lista;
    Nodo *aux2;
    while ((aux1 != NULL) && (aux1->dato < n ))
    {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }
    if(lista == aux1) {
        lista = nodoNuevo;
    } else {
        aux2 ->siguiente = nodoNuevo;
    }
    nodoNuevo ->siguiente = aux1;
}

void mostrarLista(Nodo *lista) {
    Nodo *actual = new Nodo();
    actual = lista;
    while (actual != NULL)
    {
        cout<<actual->dato<<"->";
        actual = actual->siguiente;
    }
    
}

void buscarLista(Nodo *lista, int n){
    bool band = false;
    Nodo *actual = new Nodo();
    actual = lista;
    while ((actual != NULL) && (actual->dato<=n))
    {
        if (actual->dato == n) {
            band = true;
        }
        actual = actual->siguiente;
    }

    if (band == true)
    {
        cout<<"Elemento "<<n<<" Si ha sido encontrado\n";
    } else {
        cout<<"Elemento "<<n<<" No ha sido encontrado\n";
    }
}

void eliminarNodo(Nodo *&lista, int n) {
    if ( lista !=NULL )
    {
        Nodo *auxBorrar;
        Nodo *anterior = NULL;
        auxBorrar = lista;
        while ((auxBorrar != NULL) && (auxBorrar->dato !=n))
        {
            anterior = auxBorrar;
            auxBorrar = auxBorrar->siguiente;
        }
        if ( auxBorrar == NULL) {
            cout<<"Elemento "<<n<<" No encontrado\n";
        } else if ( anterior ==  NULL ) {
            lista = lista->siguiente;
            delete auxBorrar;
            cout<<"Elemento "<<n<<" ha sido eliminado\n";
        } else {
            anterior ->siguiente = auxBorrar ->siguiente;
            delete auxBorrar;
            cout<<"Elemento "<<n<<" ha sido eliminado\n";
        } 
    }
}

void eliminarLista(Nodo *&lista, int &n){
    Nodo *aux = lista;
    n = aux->dato;
    lista = aux->siguiente;
    delete aux;
}