#include <iostream>
using namespace std;

int determinante2x2(int matriz[2][2]) {
    return matriz[0][0]*matriz[1][1] - matriz[0][1]*matriz[1][0];
}

int main() {
    int m[2][2];
    cout << "Ingrese los 4 valores de la matriz 2x2:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> m[i][j];

    cout << "Determinante: " << determinante2x2(m) << endl;

    return 0;
}
