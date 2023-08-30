#include<iostream>

using namespace std;

struct Empleado
{
    char nombre[20];
    float salario;
}empleado[100];


int main() {
    int nEmpleados, posMayor = 0, posMenor = 0;
    float mayor = 0, menor = 9999999999;

    cout<<"Digite el numero de empleados: ";
    cin>>nEmpleados;
    for(int i =0; i<nEmpleados; i++) {
        fflush(stdin);
        cout<<"Digite su nombre: ";
        cin.getline(empleado[i].nombre, 20, '\n');
        cout<<"Salario: ";
        cin>>empleado[i].salario;

        if ( empleado[i].salario > mayor ) {
            mayor = empleado[i].salario;
            posMayor = i;
        }
        if ( empleado[i].salario < menor) {
            menor = empleado[i].salario;
            posMenor = i;
        }
    }

    cout<<"Empleado con mayor salario :"<<endl;
    cout<<"Nombre: "<<empleado[posMayor].nombre<<endl;
    cout<<"Salario: "<<empleado[posMayor].salario<<endl;
    cout<<"Empleado con menor salario :"<<endl;
    cout<<"Nombre: "<<empleado[posMenor].nombre<<endl;
    cout<<"Salario: "<<empleado[posMenor].salario<<endl;    

    return 0;
}