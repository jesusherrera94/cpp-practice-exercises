#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<char> letras;
    letras.push_front('C'); //agregamos un elemento por el principio [0];
    letras.push_front('B');
    letras.push_front('A');
    letras.push_back('D'); // Inserta un elemento al final [size-1]
    letras.push_back('E');
    letras.push_back('F');

    for (int i = 0; i < letras.size(); i++)
    {
        cout<<letras[i]<<"|"; // Mostramos los elementos del deque
    }
    cout<<endl;
    letras.pop_front(); // Elimina un elemento del principio del deque
    letras.pop_back(); // Elimina un elemento del final del deque
    for (int i = 0; i < letras.size(); i++)
    {
        cout<<letras[i]<<"|"; // Mostramos los elementos del deque
    }
    cout<<endl;
    return 0;
}