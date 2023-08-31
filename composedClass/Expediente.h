#include <iostream>

using namespace std;

class Expediente
{
private:
    int nroExpediente;
public:
    Expediente(int nroExpediente) {
        this->nroExpediente = nroExpediente;
    }
    Expediente(){}
    ~Expediente(){}
    int getNroExpediente() {
        return this->nroExpediente;
    }
};

