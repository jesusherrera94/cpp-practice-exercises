#include <iostream>
#include "intercambio.h"

using namespace std;

template <typename T>
void ordenarAsc(T *arr, int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n-1); j++)
        {
            if(arr[j] > arr[j+1]){
                intercambiar(arr[j], arr[j+1]);
            }
        }
        
    }
    
}

template <typename T>
void ordenarDesc(T *arr, int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n-1); j++)
        {
            if(arr[j] < arr[j+1]){
                intercambiar(arr[j], arr[j+1]);
            }
        }
        
    }
    
}