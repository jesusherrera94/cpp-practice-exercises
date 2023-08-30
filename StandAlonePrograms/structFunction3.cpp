#include <iostream>

using namespace std;

struct Fecha
{
    int dia, mes, anio;
}f1, f2;

void pedirDatos();

Fecha mayor( Fecha, Fecha );
 void muestra (Fecha);

int main() {
    pedirDatos();
    Fecha x = mayor(f1, f2);
    muestra(x);
    return 0;
}

void pedirDatos() {
    cout<<"Digite la primer fecha: "<<endl;
    cout<<"Dia: "; cin>>f1.dia;
    cout<<"Mes: "; cin>>f1.mes;
    cout<<"Anio: "; cin>>f1.anio;

    cout<<"Digite la segunda fecha: "<<endl;
    cout<<"Dia: "; cin>>f2.dia;
    cout<<"Mes: "; cin>>f2.mes;
    cout<<"Anio: "; cin>>f2.anio;
}

Fecha mayor(Fecha f1, Fecha f2) {
    Fecha mayorFecha;
    if ((f1.anio >= f2.anio) && (f1.mes >= f2.mes) && (f1.dia >= f2.dia)) {
        mayorFecha = f1;
    } else {
        mayorFecha = f2;
    }

    return mayorFecha;
}

void muestra(Fecha x) {
    cout<<"La fecha mas reciente: "<<x.dia<<"/"<<x.mes<<"/"<<x.anio<<endl;
}