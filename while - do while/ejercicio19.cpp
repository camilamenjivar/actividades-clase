#include <iostream>
using namespace std;

int main() {
    double numero, aproximacion = 0.0;
    double paso = 0.0001;  

    cout << "Ingrese un número para calcular su raíz cuadrada aproximada: ";
    cin >> numero;

    if (numero < 0) {
        cout << "No se puede calcular la raíz cuadrada de un número negativo.\n";
        return 1;
    }

    while (aproximacion * aproximacion < numero) {
        aproximacion += paso;
    }

    // Cuando el ciclo termina, aproximacion^2 es >= numero
    aproximacion -= paso;

    cout << "La raíz cuadrada aproximada de " << numero << " es " << aproximacion << endl;

    return 0;
}