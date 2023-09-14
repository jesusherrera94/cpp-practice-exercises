#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

// Funcion para pasar las letras a mayuscula
void mayusculas(char &letra) {
    if(letra >= 'a' && letra <= 'z') {
        letra = letra - ('a' - 'A');
    }
}

// Funcion unaria para determinar si una letra es una vocal
char vocales(char letra) {
    return (letra == 'A' || letra == 'E' || letra == 'I' ||
            letra == 'O' || letra == 'U')? letra : '-';
}

int main() {
    vector<char> letras;
    for (int i = 0; i < 10; i++)
    {
        letras.push_back('a'+i);
    }

    copy(letras.begin(), letras.end(), ostream_iterator<char>(cout,"|"));
    cout<<endl;
    // Desordenar el vector letras
    random_shuffle(letras.begin(), letras.end()); // Funcion de transformacion
    cout<<"Vector desordenado!: "<<endl;
    copy(letras.begin(), letras.end(), ostream_iterator<char>(cout,"|"));
    cout<<endl;
    // Pasamos a mayusculas las letras del vector
    for_each(letras.begin(), letras.end(), mayusculas);
    cout<<"Letras en mayuscula: "<<endl;
    copy(letras.begin(), letras.end(), ostream_iterator<char>(cout,"|"));
    cout<<endl;
    cout<<"Vocales del vector: "<<endl;
    // imprimir solo las vocales
    transform(letras.begin(), letras.end(),
        ostream_iterator<char>(cout,"|"), vocales);
    cout<<endl;

    return 0;
}