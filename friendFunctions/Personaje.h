#include <iostream>

using namespace std;


class Personaje
{
friend void modificar(Personaje &, int, int);
private:
    int ataque;
    int defensa;
public:
    Personaje(int ataque, int defensa) {
        this -> ataque = ataque;
        this-> defensa = defensa;
    }
    ~Personaje(){}

    void mostrarDatos() {
        cout<<"Ataque = "<<this->ataque<<endl;
        cout<<"Defensa = "<<this->defensa<<endl;
    }
};

