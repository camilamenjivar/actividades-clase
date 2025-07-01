#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese la cantidad de elementos por arreglo: ";
    cin >> N;

    int arreglo1[N], arreglo2[N], temp;

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

    // Intercambiar valores
    for (int i = 0; i < N; i++) {
        temp = arreglo1[i];
        arreglo1[i] = arreglo2[i];
        arreglo2[i] = temp;
    }

    // Mostrar resultados
    cout << "\n--- Arreglo 1 después del intercambio ---\n";
    for (int i = 0; i < N; i++) {
        cout << arreglo1[i] << " ";
    }

    cout << "\n--- Arreglo 2 después del intercambio ---\n";
    for (int i = 0; i < N; i++) {
        cout << arreglo2[i] << " ";
    }

    cout << endl;
    return 0;
}