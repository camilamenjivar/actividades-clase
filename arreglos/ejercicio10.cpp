#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "¿Cuántos números desea ingresar? ";
    cin >> N;

    int numeros[N];

    // Pedir números al usuario
    for (int i = 0; i < N; i++) {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    int eliminar;
    cout << "Ingrese el número que desea eliminar: ";
    cin >> eliminar;

    // Contar cuántas veces aparece el número a eliminar
    int countEliminar = 0;
    for (int i = 0; i < N; i++) {
        if (numeros[i] == eliminar) {
            countEliminar++;
        }
    }

    if (countEliminar == 0) {
        cout << "El número " << eliminar << " no se encontró en el arreglo.\n";
    } else {
        // Crear un nuevo arreglo para almacenar los elementos después de eliminar
        int nuevoArreglo[N - countEliminar];
        int index = 0;
        for (int i = 0; i < N; i++) {
            if (numeros[i] != eliminar) {
                nuevoArreglo[index] = numeros[i];
                index++;
            }
        }

        cout << "Arreglo después de eliminar el número " << eliminar << ":\n";
        for (int i = 0; i < N - countEliminar; i++) {
            cout << nuevoArreglo[i] << " ";
        }
        cout << endl;
    }

    return 0;
}