#include<iostream>

using namespace std;

void tiempo(int, int&, int&, int&);

int main() {
    int totalSegs, horas, min, segs;
    cout<<"Ingrese el numero total de segundos :";
    cin>> totalSegs;
    tiempo(totalSegs, horas, min, segs);
    cout<<"Conversion a horas :"<<endl;
    cout<<"Horas: "<<horas<<endl;
    cout<<"min: "<<min<<endl;
    cout<<"segs: "<<segs<<endl;
    return 0;
}

void tiempo (int totalSegs, int& hr, int& min, int& segs){
    hr = totalSegs / 3600;
    totalSegs %= 3600;
    min = totalSegs / 60;
    segs = totalSegs % 60;

}