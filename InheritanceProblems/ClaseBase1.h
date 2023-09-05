#include <iostream>

using namespace std;

class ClaseBase1
{
private:
    int x;
public:
    ClaseBase1(int x){
        this->x =x;
    }
    ~ClaseBase1(){}
    int getX() {
        return x;
    }
};
