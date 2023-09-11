#include <iostream>

using namespace std;

void hanoi(char, char, char, int n);

int main() {
    
    hanoi('A','B','C', 3);
    return 0;
}


void hanoi(char varInicial, char varCentral, char varFinal, int n) {
    if(n==1) { // Caso base
        cout<<"Mover disco "<<n<<" desde varilla "<<varInicial<<" a varilla "<<varFinal<<endl;
    } else {
        hanoi(varInicial, varFinal, varCentral, n-1);
        cout<<"Mover disco "<<n<<" desde varilla "<<varInicial<<" a varilla "<<varFinal<<endl;
        hanoi(varCentral, varInicial, varFinal, n-1);
    }
}