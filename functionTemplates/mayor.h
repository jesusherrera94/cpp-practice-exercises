#include <iostream>

using namespace std;

// plantilla de funcion
//Siempre se deben de definir y crear en el misma linea
// template <class T, class T2> <- usadas para clases
template <typename T, typename T2> // <- para plantillas de funcion
T2 mayor(T dato1, T2 dato2){
    if(dato1 > dato2) {
        return dato1;
    } else {
        return dato2;
    }
}
// LAS PLANTILLAS ES MEJOR DEFINIRLAS EN HEADER FILES