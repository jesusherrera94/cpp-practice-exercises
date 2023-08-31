#include <iostream>

using namespace std;


class Static
{
private:
    static int counter;
    string name;

public:
    Static() {
        counter++;
    }
    int getCounter() {
        return this->counter;
    }
    ~Static() {
    }

    static int add(int n1, int n2) {
        return n1+n2;
    }
};
