#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "¿Cuántos números desea ingresar? ";
    cin >> N;

    int numeros[N];  // Arreglo para almacenar los números

    for (int i = 0; i < N; i++) {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    // Mostrar arreglo original
    cout << "\nArreglo original: ";
    for (int i = 0; i < N; i++) {
        cout << numeros[i] << " ";
    }

    // Invertir el arreglo usando dos índices
    int inicio = 0;
    int fin = N - 1;
    while (inicio < fin) {
        // Intercambiar elementos en inicio y fin
        int temp = numeros[inicio];
        numeros[inicio] = numeros[fin];
        numeros[fin] = temp;

        inicio++;
        fin--;
    }

   
    cout << "\nArreglo invertido: ";
    for (int i = 0; i < N; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}