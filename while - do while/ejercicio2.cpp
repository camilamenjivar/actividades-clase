#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;

    cout << "Ingresa números para sumar (0 para terminar): " << endl;

    // Pedimos el primer número antes del ciclo
    cin >> numero;

    while (numero != 0) {
        suma += numero;  // sumamos el número ingresado
        cin >> numero;   // pedimos otro número
    }

    cout << "La suma total es: " << suma << endl;

    return 0;
}