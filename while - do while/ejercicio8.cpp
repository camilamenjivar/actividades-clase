#include <iostream>
using namespace std;

int main() {
    float calificacion;
    float suma = 0;
    int contador = 0;

    cout << "Ingresa calificaciones (número negativo para terminar):\n";

   
    while (true) {
        cout << "Calificación #" << (contador + 1) << ": ";
        cin >> calificacion;

        if (calificacion < 0) {
            break;  // Termina el ciclo si se ingresa un número negativo
        }

        suma += calificacion;
        contador++;
    }

    if (contador > 0) {
        float promedio = suma / contador;
        cout << "\nPromedio de calificaciones: " << promedio << endl;
    } else {
        cout << "\nNo se ingresaron calificaciones válidas." << endl;
    }

    return 0;
}