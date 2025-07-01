#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Ingrese el tamaño del arreglo grande: ";
    cin >> n;
    int grande[n];

    cout << "Ingrese los elementos del arreglo grande:\n";
    for (int i = 0; i < n; i++) {
        cin >> grande[i];
    }

    cout << "Ingrese el tamaño del subarreglo: ";
    cin >> m;
    int sub[m];

    cout << "Ingrese los elementos del subarreglo:\n";
    for (int i = 0; i < m; i++) {
        cin >> sub[i];
    }

    bool encontrado = false;

    
    for (int i = 0; i <= n - m; i++) {
        bool coincide = true;
        for (int j = 0; j < m; j++) {
            if (grande[i + j] != sub[j]) {
                coincide = false;
                break;
            }
        }
        if (coincide) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "El subarreglo está contenido en el arreglo grande.\n";
    } else {
        cout << "El subarreglo NO está contenido en el arreglo grande.\n";
    }

    return 0;
}