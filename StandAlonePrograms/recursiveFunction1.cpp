#include <iostream>

using namespace std;

int factorial(int);

int main() {
    cout<<"el factorial: "<<factorial(5)<<endl;
    return 0;
}

int factorial(int n) {
    if(n==0){
        n = 1; // caso base
    } else {
        n = n * factorial(n-1);
    }
    return n;
}