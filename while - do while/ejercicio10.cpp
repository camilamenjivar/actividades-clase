#include <iostream>
using namespace std;

int main() {
    int numero;
    int digitos = 0;

    cout << "Ingresa un número entero positivo: ";
    cin >> numero;

    if (numero == 0) {
        digitos = 1;
    } else {
        while (numero != 0) {
            numero = numero / 10;
            digitos++;
        }
    }

    cout << "El número tiene " << digitos << " dígito(s)." << endl;

    return 0;
}