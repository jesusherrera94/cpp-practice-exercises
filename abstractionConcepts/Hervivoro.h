#include <iostream>
#include "Animal.h"
using namespace std;

class Hervivoro: public Animal
{
private:
public:
    void alimentarse() {
        cout<<"El animal hervivoro se alimenta de plantas"<<endl;
    }
};

