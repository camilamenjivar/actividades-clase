#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicita al usuario un número
    cout << "Ingresa un número para comenzar la cuenta regresiva: ";
    cin >> numero;

    // Ciclo while para contar hacia atrás hasta 0
    while (numero >= 0) {
        cout << numero << endl;
        numero--;  
    }

    cout << "¡Cuenta regresiva terminada!" << endl;

    return 0;
}