#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "¿Cuántos números desea ingresar? ";
    cin >> N;

    int numeros[N];  // Arreglo para guardar los números

    // Pedir al usuario que ingrese los números
    for (int i = 0; i < N; i++) {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    int busqueda;
    cout << "Ingrese el número a buscar: ";
    cin >> busqueda;

    bool encontrado = false;  // Variable para saber si el número está en el arreglo

    // Recorrer el arreglo para buscar el número
    for (int i = 0; i < N; i++) {
        if (numeros[i] == busqueda) {
            encontrado = true;
            break;  // Salir del ciclo si lo encontró
        }
    }

    // Mostrar resultado de la búsqueda
    if (encontrado) {
        cout << "El número " << busqueda << " se encuentra en el arreglo." << endl;
    } else {
        cout << "El número " << busqueda << " NO se encuentra en el arreglo." << endl;
    }

    return 0;
}