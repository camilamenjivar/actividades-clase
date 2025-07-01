#include <iostream>
using namespace std;

int main() {
    int N;

    // Pedir al usuario la cantidad de números a almacenar
    cout << "¿Cuántos números desea ingresar? ";
    cin >> N;

    // Declarar el arreglo con tamaño N
    int numeros[N];

    // Pedir al usuario que ingrese los números y almacenarlos en el arreglo
    for (int i = 0; i < N; i++) {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    int suma = 0; 

    // Calcular la suma de los elementos del arreglo
    for (int i = 0; i < N; i++) {
        suma += numeros[i];
    }

    // Mostrar el resultado
    cout << "La suma de los elementos es: " << suma << endl;

    return 0;
}