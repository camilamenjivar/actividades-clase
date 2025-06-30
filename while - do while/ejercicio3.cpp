#include <iostream>
using namespace std;

int main() {
    int numeroSecreto = 42; // número secreto 
    int intento;

    cout << "Adivina el número (entre 1 y 100): " << endl;

    do {
        cout << "Ingresa tu intento: ";
        cin >> intento;

        if (intento > numeroSecreto) {
            cout << "Demasiado alto. Intenta de nuevo.\n";
        } else if (intento < numeroSecreto) {
            cout << "Demasiado bajo. Intenta de nuevo.\n";
        } else {
            cout << "¡Felicidades! Adivinaste el número.\n";
        }
    } while (intento != numeroSecreto);

    return 0;
}