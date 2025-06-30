//Dígito Más Grande en un Número
//Solicita un número y encuentra el dígito más grande en él.
#include <iostream>
using namespace std;

int main() {
    int numero;
    int mayor = 0;

    cout << "Ingresa un numero: ";
    cin >> numero;

    // Si es negativo, lo convertimos a positivo
    if (numero < 0) {
        numero = -numero;
    }

    for (; numero > 0; numero = numero / 10) {
        int digito = numero % 10;  
        if (digito > mayor) {
            mayor = digito;      
        }
    }

    cout << "El digito mas grande es: " << mayor << endl;

    return 0;
}
