#include <iostream>
#include "Poligono.h"

using namespace std;

class Rectangulo: public Poligono
{
private:
    float base, altura;
public:
    Rectangulo(float base, float altura){
        this->base = base;
        this->altura = altura;
    }
    ~Rectangulo(){}
    float perimetro(){
        return 2 * (base + altura);
    }
    float area() {
        return base * altura;
    }
};

