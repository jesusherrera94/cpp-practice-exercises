#include <iostream>
#include "SerVivo.h"
using namespace std;

class Planta: public SerVivo
{
private:
public:
    void alimentarse() {
        cout<<"La planta se alimenta mediante fotosintesis"<<endl;
    }
};

