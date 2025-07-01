#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> N;

    int arreglo[N];

    // Llenar el arreglo
    for (int i = 0; i < N; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> arreglo[i];
    }

    cout << "\nElementos repetidos:\n";
    bool repetido = false;

    for (int i = 0; i < N; i++) {
        bool yaContado = false;

        // Verificar si ya se contó antes este valor
        for (int k = 0; k < i; k++) {
            if (arreglo[i] == arreglo[k]) {
                yaContado = true;
                break;
            }
        }

        if (yaContado)
            continue;

        // Contar cuántas veces aparece el valor actual
        int contador = 0;
        for (int j = 0; j < N; j++) {
            if (arreglo[i] == arreglo[j]) {
                contador++;
            }
        }

        if (contador > 1) {
            cout << arreglo[i] << " se repite " << contador << " veces.\n";
            repetido = true;
        }
    }

    if (!repetido) {
        cout << "No hay elementos repetidos.\n";
    }

    return 0;
}