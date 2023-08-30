#include <iostream>

using namespace std;

struct Etapa
{
    int horas, min, segs;
}etapas[3], *punteroEtapa = etapas;

void pedirDatos();
void calcularTiempo(Etapa *);

int main() {
    pedirDatos();
    calcularTiempo(punteroEtapa);
    return 0;
}

void pedirDatos() {
    cout<<"Ingrese los datos del ciclista: \n";
    for (int i = 0; i < 3; i++)
    {
        cout<<"Horas: ";
        cin>>(punteroEtapa+i)->horas;
        cout<<"Minutos: ";
        cin>>(punteroEtapa+i)->min;
        cout<<"Segundos: ";
        cin>>(punteroEtapa+i)->segs;
    }   
}

void calcularTiempo(Etapa *punteroEtapa) {
    int hrT = 0, minT =0, segsT =0;
    for (int i = 0; i < 3; i++)
    {
        hrT = hrT + (punteroEtapa+i) ->horas;
        minT = minT + (punteroEtapa+i)->min;
        if (minT >= 60) {
            minT = minT - 60;
            hrT++;
        }
        segsT = segsT + (punteroEtapa+i)->segs;
        if (segsT >= 60) {
            segsT = segsT - 60;
            minT++;
        }
    }

    cout<<"Mostrando el tiempo total: \n";

    cout<<"Horas: "<<hrT<<endl;
    cout<<"Mins: "<<minT<<endl;
    cout<<"Segs: "<<segsT<<endl;
    
}