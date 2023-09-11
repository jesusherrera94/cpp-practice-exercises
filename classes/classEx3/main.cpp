#include <iostream>
#include "Tablero.h"

using namespace std;

int main() {
    Tablero* ob1;
    int x,y, opcion, n;
    cout<<"Ingrese posicion inicial x: ";
    cin>>x;
    cout<<"Ingrese posicion inicial y: ";
    cin>>y;

    ob1 = new Tablero(x,y);

    do {
        cout<<"\n\tMENU"<<endl;
        cout<<"1. mover arriba"<<endl;
        cout<<"2. mover abajo"<<endl;
        cout<<"3. mover derecha"<<endl;
        cout<<"4. mover izquierda"<<endl;
        cout<<"5. Digite una opcion: ";
        cin>>opcion;
        if (opcion >= 1 && opcion <= 4) {
            cout<<"\nDigite cuantas posicion desea mover: ";
            cin>>n;
        }
        switch (opcion)
        {
        case 1:
            ob1->moverArriba(n);
            break;
        case 2:
            ob1->moverAbajo(n);
            break;
        case 3:
            ob1->moverDerecha(n);
            break;
        case 4:
            ob1->moverIzquierda(n);
            break;
        default:
            break;
        }
        cout<<"Posicion actual: ("<<ob1->getX()<<" , "<<ob1->getY()<<")\n";
    } while (opcion !=5);
    

    return 0;
}