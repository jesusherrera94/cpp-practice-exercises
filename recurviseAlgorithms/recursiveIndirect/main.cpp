#include <iostream>

using namespace std;

void functionA(char);
void functionB(char);

int main() {
    cout<<"Imprimiendo el Alfabeto: ";
    functionA('Z');
    return 0;
}


void functionA(char letra) {
    if (letra > 'A') {
        functionB(letra);
    }
    cout<<letra<<" ";
}

void functionB(char letra) {
    functionA(--letra);
}