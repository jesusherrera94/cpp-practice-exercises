#include <iostream>

using namespace std;

const int N = 8;
int tablero[N][N];

int d[8][2] = {{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};

void saltoCaballo(int, int, int, bool &);
void escribeTablero();



int main() {
    bool exito;
    int fila = 1;
    int col = 0;
    tablero[fila][col]= 1;
    saltoCaballo(2,fila, col, exito);
    if(exito) {
        cout<<"Camino encontrado"<<endl;
        escribeTablero();
    } else {
        cout<<"Camino no encontrado"<<endl;
    }
    return 0;
}

void saltoCaballo(int i, int x, int y, bool &exito) {
    int nx, ny;
    int k=0; // inicializa contador de posibes 8 movimientos
    exito = false;
    do
    {
        k++;
        nx= x + d[k-1][0];
        ny = y + d[k-1][1];
        if ((nx>=0) && (nx<N) && (ny>=0) && (ny<N) && tablero[nx][ny] == 0) {
            tablero[nx][ny] = i;
            escribeTablero();
            if(i<N*N) {
                saltoCaballo(i+1,nx,ny,exito);
                if (!exito) {
                    tablero[nx][ny] = 0;
                }
            } else {
                exito = true;
            }
        }
    } while (k<8 && !exito);
    
}

void escribeTablero() {
    int i,j;
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
           cout<<tablero[i][j]<<" | ";
        }
        cout<<endl; 
    }
    cout<<endl;
}