#include <iostream>

using namespace std;

int escribeNumeros(int, int);

int main() {
    int ini, fin;

    cout<<"Digite inicio: "; cin>>ini;
    cout<<"Digite final: "; cin>>fin;

    for (int i = ini; i <= fin; i++)
    {
        cout<<escribeNumeros(i, fin)<<" ";
    }
    cout<<endl;
    

    return 0;
}

int escribeNumeros(int ini, int fin) {
    if (ini == fin) {
        return ini;
    } else {
        return escribeNumeros(ini, fin -1);
    }
}