#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "¿Cuántos números desea ingresar? ";
    cin >> N;

    int numeros[N];  // Arreglo para guardar los números
    int pares = 0;   // Contador de números pares
    int impares = 0; // Contador de números impares

    // Pedir al usuario que ingrese los números
    for (int i = 0; i < N; i++) {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    // Contar pares e impares
    for (int i = 0; i < N; i++) {
        if (numeros[i] % 2 == 0) {
            pares++;    // Es par
        } else {
            impares++;  // Es impar
        }
    }

    // Mostrar resultados
    cout << "Cantidad de números pares: " << pares << endl;
    cout << "Cantidad de números impares: " << impares << endl;

    return 0;
}