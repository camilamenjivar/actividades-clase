#include <iostream>
using namespace std;

int main() {
    int numero, original, invertido = 0, digito;

    // Pedir al usuario que ingrese un número
    cout << "Ingrese un número: ";
    cin >> numero;

    original = numero; 

    // Invertir el número
    while (numero > 0) {
        digito = numero % 10;         
        invertido = invertido * 10 + digito; 
        numero /= 10;                 
    }

    // Comparar número original con invertido
    if (original == invertido) {
        cout << original << " es capicúa." << endl;
    } else {
        cout << original << " no es capicúa." << endl;
    }

    return 0;
}