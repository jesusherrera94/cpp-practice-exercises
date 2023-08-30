#include <iostream>
#include<string>

using namespace std;

void pedirDatos();

char nombreUsuario[30];

int main() {
    
    return 0;
}

void pedirDatos() {
    cout<<"Digite su nombre: ";
    cin.getline(nombreUsuario, 30, '\n');
    for (int i = 0; i < 30; i++)
    {
       toupper(nombreUsuario[i]);
    }
    
}