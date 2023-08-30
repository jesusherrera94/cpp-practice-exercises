#include <iostream>
#include "DiaAnio.h"

using namespace std;

int main() {
    DiaAnio* hoy;
    DiaAnio* cumple;
    int d, m;

    cout<<"Introduzca la fecha de hoy, dia: ";
    cin>>d;
    cout<<"Introduzca la fecha de hoy, mes: ";
    cin>>m;

    hoy = new DiaAnio(d,m);

    cout<<"Introduzca la fecha de su cumple, dia: ";
    cin>>d;
    cout<<"Introduzca la fecha de su cumple, mes: ";
    cin>>m;

    cumple = new DiaAnio(d,m);
    // mostramos las fechas
    hoy->visualizar();
    cout<<endl;
    cumple->visualizar();

    if (hoy->igual(*cumple)) {
        cout<<"Feliz cumple!!!"<<endl;
    } else {
        cout<<"Feliz dia!!!"<<endl;
    }


    return 0;
}