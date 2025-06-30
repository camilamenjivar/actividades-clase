#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    int numeroSecreto, intento, intentosRestantes = 5;

    // Generar número aleatorio entre 1 y 50
    srand(time(0));
    numeroSecreto = rand() % 50 + 1;

    cout << "Adivina el numero secreto entre 1 y 50. Tienes 5 intentos." << endl;

    while (intentosRestantes > 0) {
        cout << "Intento #" << (6 - intentosRestantes) << ": ";
        cin >> intento;

        if (intento == numeroSecreto) {
            cout << "¡Felicidades! Adivinaste el numero." << endl;
            break;
        } else if (intento < numeroSecreto) {
            cout << "El numero secreto es mayor." << endl;
        } else {
            cout << "El numero secreto es menor." << endl;
        }

        intentosRestantes--;
    }

    if (intentosRestantes == 0) {
        cout << "¡Se te acabaron los intentos! El numero secreto era: " << numeroSecreto << endl;
    }

    return 0;
}
