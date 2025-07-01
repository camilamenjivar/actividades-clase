#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese el tamaño de la matriz identidad (NxN): ";
    cin >> N;

    int matriz[N][N];

    // Llenar la matriz identidad
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j)
                matriz[i][j] = 1;  
            else
                matriz[i][j] = 0;  
        }
    }

    // Mostrar la matriz
    cout << "\nMatriz Identidad " << N << "x" << N << ":\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}