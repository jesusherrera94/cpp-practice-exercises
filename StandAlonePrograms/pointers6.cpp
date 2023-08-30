#include <iostream>

using namespace std;

int main() {
    
    int nEl, nums[100], *dirNums, menor=999999;
    cout<<"Digite el numero de elementos: "; cin>>nEl;
    for (int i = 0; i < nEl; i++)
    {
       cout<<"Digite un numero: "; cin>>nums[i];
    }

    dirNums = nums;

    for (int j = 0; j < nEl; j++)
    {
        if (*dirNums < menor){
            menor = *dirNums;
        }
        dirNums++;
    }

    cout<<"El menor elemento es: "<<menor<<endl;

    return 0;
}