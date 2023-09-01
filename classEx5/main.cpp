#include <iostream>
#include "Atleta.h"

using namespace std;

int main() {
    Atleta* atletas;
    int numeroAtletas, indiceGanador;
    int numeroAtleta;
    string nombre;
    float tiempoCarrera;
    cout<<"Digite el numero de atletas: ";
    cin>>numeroAtletas;

    atletas = new Atleta[numeroAtletas];

    for (int i = 0; i < numeroAtletas; i++)
    {
        fflush(stdin);
        cout<<"\nDigite los datos del atleta "<<(i+1)<<": "<<endl;
        cout<<"Digite el numero de atleta: ";
        cin>>numeroAtleta;
        fflush(stdin);
        cout<<"Digite el nombre del atleta: ";
        getline(cin, nombre);
        fflush(stdin);
        cout<<"Digite el tiempo de carrera: ";
        cin>>tiempoCarrera;
        atletas[i] = Atleta(numeroAtleta, nombre, tiempoCarrera);
    }

    indiceGanador = Atleta::indiceAtletaGanador(atletas, numeroAtletas);

    cout<<"El atleta ganador es: "<<endl;
    (atletas+indiceGanador)->mostrarDatos();
    delete[] atletas;
    return 0;
}