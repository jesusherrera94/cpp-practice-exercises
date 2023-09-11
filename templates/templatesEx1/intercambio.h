#include <iostream>

using namespace std;

// platilla de funcion
template <typename T>
void intercambiar(T &dato1, T &dato2) {
    T temp;
    temp = dato1;
    dato1 = dato2;
    dato2 = temp;
}