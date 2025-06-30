#include <iostream>
using namespace std;

int main() {
    int numero, factorial = 1, contador = 1;

    cout << "Ingresa un numero: ";
    cin >> numero;

    while (contador <= numero) {
        factorial = factorial * contador;
        contador++;
    }

    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}
