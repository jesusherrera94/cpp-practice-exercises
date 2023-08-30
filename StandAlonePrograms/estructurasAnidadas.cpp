#include<iostream>

using namespace std;

struct infoDireccion
{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado
{
    char nombre[20];
    struct infoDireccion dirEmpleado;
    double salario;
    
}empleados[2];

int main(){
    
    for (int i = 0; i<2; i++) {
        fflush(stdin);
        cout<<"Digite su nombre: ";
        cin.getline(empleados[i].nombre, 20, '\n');
        cout<<"Digite su direccion: ";
        cin.getline(empleados[i].dirEmpleado.direccion, 30, '\n');
        cout<<"Digite su ciudad: ";
        cin.getline(empleados[i].dirEmpleado.ciudad, 20, '\n');
        cout<<"Digite su provincia: ";
        cin.getline(empleados[i].dirEmpleado.provincia, 20, '\n');
        cout<<"Digite su salario: ";
        cin>>empleados[i].salario;
        cout<<"\n";
    }
    //imprimir los datos
    for (int i = 0; i<2; i++) {
        cout<<"Nombre: "<<empleados[i].nombre<<endl;
        cout<<"Direccion: "<<empleados[i].dirEmpleado.direccion<<endl;
        cout<<"ciudad: "<<empleados[i].dirEmpleado.ciudad<<endl;
        cout<<"provincia: "<<empleados[i].dirEmpleado.provincia<<endl;
        cout<<"Salario: "<<empleados[i].salario<<endl<<endl;

    }
    return 0;
}