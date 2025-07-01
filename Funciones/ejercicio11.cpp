#include <iostream>
using namespace std;

// Función para ordenar un arreglo en orden ascendente
void ordenarAscendente(int arr[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (arr[i] > arr[j]) {
                // Intercambiar valores
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "¿Cuántos números vas a ingresar? ";
    cin >> n;
    int arreglo[n];

    for (int i = 0; i < n; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    ordenarAscendente(arreglo, n);

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}
