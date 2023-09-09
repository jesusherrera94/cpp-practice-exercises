#include <iostream>

using namespace std;

template <class T1, class T2>

class EjemploPlatilla
{
private:
    T1 dato1;
    T2 dato2;
public:
    EjemploPlatilla(T1 dato1, T2 dato2){
        this->dato1 = dato1;
        this->dato2 = dato2;
    }
    ~EjemploPlatilla(){}

    void setDato1(T1 dato1) {
        this->dato1 = dato1;
    }
    void setDato2(T2 dato2) {
        this->dato2 = dato2;
    }
    T1 getDato1() {
        return this->dato1;
    }
    T2 getDato2() {
        return this->dato2;
    }

    void mostrarDatos(){
        cout<<"Dato1: "<<this->dato1<<endl;
        cout<<"Dato2: "<<this->dato2<<endl;
    }

};

