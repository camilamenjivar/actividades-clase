#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int arreglo[n];
    cout << "Ingrese los elementos del arreglo:\n";
    for (int i = 0; i < n; i++) {
        cin >> arreglo[i];
    }

    // Eliminar duplicados
    int sinDuplicados[n];
    int nuevoTam = 0;

    for (int i = 0; i < n; i++) {
        bool repetido = false;
        for (int j = 0; j < nuevoTam; j++) {
            if (arreglo[i] == sinDuplicados[j]) {
                repetido = true;
                break;
            }
        }
        if (!repetido) {
            sinDuplicados[nuevoTam] = arreglo[i];
            nuevoTam++;
        }
    }

    cout << "Arreglo sin duplicados:\n";
    for (int i = 0; i < nuevoTam; i++) {
        cout << sinDuplicados[i] << " ";
    }
    cout << endl;

    return 0;
}