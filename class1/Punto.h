class Punto
{
    //Attributes
private:
    int x,y;
    //Methods
public:
    // constructor
    Punto(int _x, int _y){
        x = _x;
        y = _y;
    }
    // destructor
    // ~Punto();
    Punto () {
        x = y = 0;
    }
    // setter
    void setX(int valorX);
    void setY(int valorY);
    int getX();
    int getY();
};
