#include <iostream>

using namespace std;
template <class T>

class Materia
{
private:
    string nombreMateria;
    int clave;
    T calificacion;
public:
    Materia(string nombreMateria, int clave, T calificacion){
        this->nombreMateria = nombreMateria;
        this->clave = clave;
        this->calificacion = calificacion;
    }
    ~Materia(){}
    void mostrarDatos(){
        cout<<"Nombre de la materia: "<<nombreMateria<<endl;
        cout<<"Clave: "<<clave<<endl;
        cout<<"Calificacion: "<<calificacion<<endl;
    }
    void setCalificacion(T calificacion) {
        this->calificacion = calificacion;
    }
    T getCalificacion() {
        return this->calificacion;
    }
};

