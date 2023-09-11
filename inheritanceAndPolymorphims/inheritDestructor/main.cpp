#include <iostream>
#include "ClaseHija.h"

using namespace std;

int main() {
    ClaseHija* ob1 = new ClaseHija(5,10);
    cout<<endl;

    delete ob1;
    return 0;
}