#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "¿Cuántos números desea ingresar? ";
    cin >> N;

    int numeros[N];  // Arreglo para almacenar los números

    // Pedir al usuario que ingrese los números
    for (int i = 0; i < N; i++) {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    int objetivo;
    cout << "Ingrese el número que desea buscar: ";
    cin >> objetivo;

    int contador = 0;  // Variable para contar las ocurrencias

    // Recorrer el arreglo para contar cuántas veces aparece 'objetivo'
    for (int i = 0; i < N; i++) {
        if (numeros[i] == objetivo) {
            contador++;  // Incrementar contador si encontramos el número
        }
    }

    // Mostrar el resultado
    cout << "El número " << objetivo << " aparece " << contador << " veces en el arreglo." << endl;

    return 0;
}