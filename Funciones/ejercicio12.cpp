#include <iostream>
using namespace std;

// Función para verificar si un número es perfecto
bool esPerfecto(int n) {
    int suma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            suma += i;
    }
    return suma == n;
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (esPerfecto(numero))
        cout << "Es un numero perfecto." << endl;
    else
        cout << "No es un numero perfecto." << endl;

    return 0;
}
