#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese la cantidad de elementos por arreglo: ";
    cin >> N;

    int arreglo1[N], arreglo2[N], arregloFusionado[2 * N];

    // Llenar el primer arreglo
    cout << "\n--- Ingrese elementos para el primer arreglo ---\n";
    for (int i = 0; i < N; i++) {
        cout << "arreglo1[" << i << "]: ";
        cin >> arreglo1[i];
    }

    // Llenar el segundo arreglo
    cout << "\n--- Ingrese elementos para el segundo arreglo ---\n";
    for (int i = 0; i < N; i++) {
        cout << "arreglo2[" << i << "]: ";
        cin >> arreglo2[i];
    }

    // Fusionar ambos arreglos en uno solo
    for (int i = 0; i < N; i++) {
        arregloFusionado[i] = arreglo1[i];
    }
    for (int i = 0; i < N; i++) {
        arregloFusionado[N + i] = arreglo2[i];
    }

    // Mostrar el arreglo fusionado
    cout << "\n--- Arreglo Fusionado ---\n";
    for (int i = 0; i < 2 * N; i++) {
        cout << arregloFusionado[i] << " ";
    }
    cout << endl;

    return 0;
}