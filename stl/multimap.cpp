#include <iostream>
#include <iterator>
#include <map>

using namespace std;

typedef pair<int, string> par; // Crear una definicion con un alias

int main() {
    multimap<int, string> valores;
    // Insertar valores
    valores.insert(par(3, "Estefany"));
    valores.insert(par(1, "Luis"));
    valores.insert(par(5, "Jesus"));
    valores.insert(par(2, "Maria"));

    // Insertarmos valores con clave repetidas
    // Lo cual en el multimap si es permitido
    valores.insert(par(1, "Carla"));
    valores.insert(par(5, "Paola"));
    valores.insert(par(5, "Fernando"));
    
    // Mostrar el map en pantalla

    map<int, string>::iterator i;

    for ( i = valores.begin(); i != valores.end(); i++)
    {
        cout<<"Clave: "<< i->first <<" | Valor: "<<i->second <<endl;
    }
    cout<<endl;

    // Contar cuantas veces aparece una clave y mostrarlo
    int clave = 1;
    cout<<"Conteo de la clave "<<clave<<": "<<valores.count(clave)<<endl;
    for (i = valores.lower_bound(clave); i != valores.upper_bound(clave); i++) // lower and upper bound se posicione sobre la primera y la ultima coincidencia respectivamente
    {
        cout<<i->second<<" | ";
    }
    cout<<endl;

    // Para mas info buscar en cplusplus.com
    
    return 0;
}