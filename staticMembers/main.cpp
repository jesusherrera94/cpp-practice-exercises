#include <iostream>
#include "Static.h"

using namespace std;

int main() {
    Static* ob1 = new Static();
    cout<<ob1->getCounter()<<endl;
    Static* ob2 = new Static();
    cout<<ob1->getCounter()<<endl;
    Static* ob3 = new Static();
    cout<<ob1->getCounter()<<endl;

    cout<<"La suma es: "<<Static::add(4,5)<<endl;

    return 0;
}