#include <iostream>
using namespace std;

int main() {
    int N;

    // Pedir la cantidad de números al usuario
    cout << "¿Cuántos números desea ingresar? ";
    cin >> N;

    int numeros[N];  // Arreglo para almacenar los números

    // Pedir al usuario que ingrese los números
    for (int i = 0; i < N; i++) {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    // Inicializar mayor y menor con el primer elemento del arreglo
    int mayor = numeros[0];
    int menor = numeros[0];

    // Recorrer el arreglo para encontrar mayor y menor
    for (int i = 1; i < N; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];  // Actualizar mayor
        }
        if (numeros[i] < menor) {
            menor = numeros[i];  // Actualizar menor
        }
    }

    // Mostrar los resultados
    cout << "El número mayor es: " << mayor << endl;
    cout << "El número menor es: " << menor << endl;

    return 0;
}