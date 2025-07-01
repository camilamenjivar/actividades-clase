#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese el tamaño de la matriz (N x N): ";
    cin >> n;

    int matriz[n][n];

    // Leer los elementos de la matriz
    cout << "Ingrese los elementos de la matriz:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }

    // Mostrar los elementos de la diagonal principal
    cout << "Elementos en la diagonal principal:\n";
    for(int i = 0; i < n; i++){
        cout << matriz[i][i] << " ";
    }
    cout << endl;

    return 0;
}