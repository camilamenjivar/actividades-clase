#include <iostream>
using namespace std;

int main() {
    int numero; 

    
    do {
        cout << "Ingresa un número entre 1 y 10: ";
        cin >> numero; // Leer el número del usuario

        
        if (numero < 1 || numero > 10) {
            cout << "Número fuera de rango. Inténtalo de nuevo.\n";
        }

    } while (numero < 1 || numero > 10); // Condición para repetir el ciclo

    
    cout << "¡Número válido! Ingresaste: " << numero << endl;

    return 0; 