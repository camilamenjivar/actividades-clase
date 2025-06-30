#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0;
// pedimos que ingrese un numero positivo
    cout << "Ingresa un numero entero: ";
    cin >> numero;

    // el número tiene que ser positivo
    if (numero < 0) {
        numero = -numero;
    }

    for (; numero > 0; numero = numero / 10) {
        int digito = numero % 10;
        suma = suma + digito;
    }

    cout << "La suma de los digitos es: " << suma << endl;

    return 0;
}
