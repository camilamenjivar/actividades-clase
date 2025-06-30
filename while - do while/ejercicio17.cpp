#include <iostream>
using namespace std;

int main() {
    int dividendo, divisor;
    int cociente = 0;

    // Pedir los números
    cout << "Ingrese el dividendo (numero a dividir): ";
    cin >> dividendo;

    cout << "Ingrese el divisor (numero divisor): ";
    cin >> divisor;

    // Validar divisor distinto de cero
    if (divisor == 0) {
        cout << "Error: no se puede dividir entre cero." << endl;
        return 1; // Termina el programa con error
    }

    // Solo para valores positivos 
    if (dividendo < 0 || divisor < 0) {
        cout << "Por favor, ingrese solo números positivos." << endl;
        return 1;
    }

    // Restar sucesivamente mientras el dividendo sea mayor o igual que el divisor
    while (dividendo >= divisor) {
        dividendo = dividendo - divisor;
        cociente++;
    }

   
    cout << "Cociente: " << cociente << endl;
    cout << "Resto: " << dividendo << endl;

    return 0;
}