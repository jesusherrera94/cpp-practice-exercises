#include <iostream>

using namespace std;

int main() {
    int nums[10], *dirNum;

    for (int i = 0; i < 10; i++)
    {
       cout<<"Digite un numero: "; cin>>nums[i];
    }
    
    dirNum = nums;

    for (int j = 0; j < 10; j++)
    {
        if (*dirNum % 2 == 0){
            cout<<"El numero: "<<*dirNum<<" es par"<<endl;
            cout<<"Posicion: "<<dirNum<<endl;
        }
        dirNum++;
    }
    

    return 0;
}