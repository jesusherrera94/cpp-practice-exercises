#include <iostream>

using namespace std;

class ClaseBase
{
private:
    int numero;
public:
    ClaseBase(int numero) {
        this->numero = numero;
        cout<<"Constructor de la case base"<<endl;
    }
    ~ClaseBase(){
        cout<<"Destructor de la case base"<<endl;
    }
};


