//Factorial de un numero
//Pide un número al usuario y calcula su factorial.
#include <iostream>
using namespace std;

int main() {
    int numero;
    int factorial = 1;

    cout << "Ingresa un numero entero que sea positivo: ";
    cin >> numero;

    // si el numeor es menor que 0 se mostrara que no existe
    if (numero < 0) {
        cout << "No existe el factorial de un numero negativo." << endl;
    } else {
        for (int i = 1; i <= numero; i++) {
            factorial = factorial * i;
        }
        cout << "El factorial de " << numero << " es: " << factorial << endl;
    }

    return 0;
}
