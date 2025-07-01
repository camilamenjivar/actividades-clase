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

    // Guardar el último elemento
    int ultimo = arreglo[N - 1];

    // Mover todos los elementos una posición a la derecha
    for (int i = N - 1; i > 0; i--) {
        arreglo[i] = arreglo[i - 1];
    }

    // Poner el último elemento al principio
    arreglo[0] = ultimo;

    // Mostrar el arreglo rotado
    cout << "\nArreglo rotado a la derecha:\n";
    for (int i = 0; i < N; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}