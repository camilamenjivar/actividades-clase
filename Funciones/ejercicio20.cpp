#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void juegoAdivinar() {
    srand(time(0));
    int secreto = rand() % 50 + 1;
    int intento, intentos = 5;

    while (intentos > 0) {
        cout << "Adivina el numero (1-50): ";
        cin >> intento;

        if (intento == secreto) {
            cout << "¡Correcto! Adivinaste." << endl;
            return;
        } else if (intento < secreto) {
            cout << "Es mayor." << endl;
        } else {
            cout << "Es menor." << endl;
        }

        intentos--;
    }

    cout << "Perdiste. El numero era: " << secreto << endl;
}

int main() {
    juegoAdivinar();
    return 0;
}
