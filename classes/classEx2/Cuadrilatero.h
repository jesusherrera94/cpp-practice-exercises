class Cuadrilatero
{
private:
    float lado1;
    float lado2;
public:
    Cuadrilatero(float lado1, float lado2){
        this->lado1 = lado1;
        this->lado2 = lado2;
    }
    Cuadrilatero(float lado1) {
        this->lado1 = this->lado2 =lado1;
    }
    float obtenerPerimetro() {
        return 2 * (lado1 + lado2);
    }
    float obtenerArea() {
        return lado1 * lado2;
    }
    ~Cuadrilatero(){}
};
