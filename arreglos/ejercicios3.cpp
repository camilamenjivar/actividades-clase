#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "¿Cuántos números desea ingresar? ";
    cin >> N;

    int numeros[N];  // Arreglo para almacenar los números
    int suma = 0;    // Variable para acumular la suma

    // Pedir al usuario que ingrese los números y sumarlos
    for (int i = 0; i < N; i++) {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> numeros[i];
        suma += numeros[i];  // Acumular el valor en suma
    }

    // Calcular el promedio
    double promedio = static_cast<double>(suma) / N;

    // Mostrar el resultado
    cout << "El promedio es: " << promedio << endl;

    return 0;
}