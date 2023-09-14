#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // Para usar su funcion accumulate
#include <iterator>
#include <cstdlib>
#include <fstream>

using namespace std;

//Funcion logica si un numero es un positivo
template <class T>
bool esPositivo(T valor) {
    return valor >= 0;
}

int main() {
   vector<float> numeros;
   //Abrimos el archivo en modo lectura
   ifstream archivo("archivoNumerico.txt", ios::in); // crear el archivo de texto con estos valores 10.45 -6.78 1.23 8.98 -3.567 90.12 76.45

   // Copiamos todos los elementos del archivo hacia el vector numeros
   copy(istream_iterator<float>(archivo), istream_iterator<float>(), back_inserter(numeros)); // back_inserter es una funcion para copiar en una sola linea los elementos en un contenedor

   // Calculamos el maximo y minimo de los elementos del vector
   cout<<"Maximo: "<< *max_element(numeros.begin(), numeros.end())<<endl;
   cout<<"Minimo "<< *min_element(numeros.begin(), numeros.end())<<endl;

   // Calculamos el valor promedio de los elementos del vector
   cout<<"Valor promedio: "
   <<accumulate(numeros.begin(), numeros.end(), 0.0) / numeros.size()<<endl;

   // Calcular el contedo de los numeros positivos
   cout<<"Cantidad de numeros positivos: "
   <<count_if(numeros.begin(), numeros.end(), esPositivo<float>)<<endl;

    return 0;
}