//Número Primo
//Pide un número y determina si es primo.

#include <iostream>
using namespace std;

int main() {
    int numero;
    bool esPrimo = true;

    cout << "Ingresa un numero: ";
    cin >> numero;

    if (numero <= 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                esPrimo = false;
                break; 
            }
        }
    }

    if (esPrimo) {
        cout << numero << " si es un numero primo." << endl;
    } else {
        cout << numero << " no es un numero primo." << endl;
    }

    return 0;
}
