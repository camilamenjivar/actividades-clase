#include <iostream>
using namespace std;

int eliminarDuplicados(int arr[], int tam) {
    int nuevoTam = 0;
    for (int i = 0; i < tam; i++) {
        bool repetido = false;
        for (int j = 0; j < nuevoTam; j++) {
            if (arr[i] == arr[j]) {
                repetido = true;
                break;
            }
        }
        if (!repetido) {
            arr[nuevoTam] = arr[i];
            nuevoTam++;
        }
    }
    return nuevoTam;
}

int main() {
    int n;
    cout << "Cantidad de numeros: ";
    cin >> n;
    int arreglo[n];

    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    int nuevoTam = eliminarDuplicados(arreglo, n);

    cout << "Arreglo sin duplicados: ";
    for (int i = 0; i < nuevoTam; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}
