#include<iostream>

using namespace std;


class Persona
{
private:
    string nombre;
    int edad;
    string dni;
public:
    Persona(string _nombre, int _edad){
        nombre = _nombre;
        edad = _edad;
    }
    Persona(string _dni){
        dni = _dni;
    }
    void correr () {
        cout<<"Soy "<<nombre<<", tengo "<<edad<<" y estoy corriendo\n";
    }

    void correr (int km) {
        cout<<"He corrido "<<km<<" kilometros\n";
    }
};

