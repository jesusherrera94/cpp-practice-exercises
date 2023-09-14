#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
    ifstream archivo;
    archivo.open("documento.txt", ios::in); // crear el archivo en la misma ruta de este
    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo"<<endl;
        exit(1);
    }

    istream_iterator<char> p(archivo); // Iterador para char
    vector<char> frase;
    while (!archivo.eof()) //mientras no sea el final del archivo
    {
        frase.push_back(*p); // Almacenamos el caracter por el que vamos
        p++;
    }
    
    // mostramos el vector frase
    for (int i = 0; i < frase.size(); i++)
    {
        cout<<frase[i];
    }
    cout<<endl;

    archivo.close();


    return 0;
}