#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese el tamaño de los arreglos: ";
    cin >> N;

    int arreglo1[N], arreglo2[N], intercalado[N * 2];

    // Llenar el primer arreglo
    cout << "\nIngrese los elementos del primer arreglo:\n";
    for (int i = 0; i < N; i++) {
        cout << "Elemento 1[" << i << "]: ";
        cin >> arreglo1[i];
    }

    // Llenar el segundo arreglo
    cout << "\nIngrese los elementos del segundo arreglo:\n";
    for (int i = 0; i < N; i++) {
        cout << "Elemento 2[" << i << "]: ";
        cin >> arreglo2[i];
    }

    // Intercalar elementos
    for (int i = 0, j = 0; i < N; i++) {
        intercalado[j++] = arreglo1[i];
        intercalado[j++] = arreglo2[i];
    }

    // Mostrar arreglo intercalado
    cout << "\nArreglo intercalado:\n";
    for (int i = 0; i < N * 2; i++) {
        cout << intercalado[i] << " ";
    }
    cout << endl;

    return 0;
}