#ifndef POLIGONO_H
#define POLIGONO_H
#include <iostream>

using namespace std;

class Poligono
{
private:
    /* data */
public:
    virtual float perimetro() = 0;
    virtual float area()=0;
};

#endif