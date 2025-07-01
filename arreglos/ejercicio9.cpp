#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "¿Cuántos números desea ingresar? ";
    cin >> N;

    int numeros[N];  // Arreglo para almacenar los números
    long long producto = 1;  // Usamos long long para evitar overflow en productos grandes

    // Pedir al usuario que ingrese los números
    for (int i = 0; i < N; i++) {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    // Calcular el producto de todos los elementos
    for (int i = 0; i < N; i++) {
        producto *= numeros[i];
    }

    // Mostrar el resultado
    cout << "El producto de todos los elementos es: " << producto << endl;

    return 0;
}