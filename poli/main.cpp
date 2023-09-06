#include <iostream>
#include "Poligono.h"
#include "Triangulo.h"
#include "Rectangulo.h"
using namespace std;

int main() {
    Poligono* poligono[2];
    poligono[0] = new Rectangulo(7,4);
    poligono[1] = new Triangulo(3,4,4);

    for (int i = 0; i < 2; i++)
    {
        cout<<"Area ["<<i<<"]: "<<poligono[i]->area()<<endl;
        cout<<"Perimetro ["<<i<<"]: "<<poligono[i]->perimetro()<<endl;
    }
    
    return 0;
}