#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese el tamaño de las matrices (N x N): ";
    cin >> n;

    int A[n][n], B[n][n], resultado[n][n];

    // Lectura de la primera matriz
    cout << "Ingrese los elementos de la matriz A:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Lectura de la segunda matriz
    cout << "Ingrese los elementos de la matriz B:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }

    // Inicializar matriz resultado con ceros
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = 0;
        }
    }

    // Multiplicación de matrices
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Mostrar resultado
    cout << "Resultado de la multiplicación de matrices (A x B):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << resultado[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}