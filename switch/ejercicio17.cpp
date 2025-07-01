#include <iostream>
using namespace std;

int main() {
    int transporte;

    // Mostrar las opciones de transporte
    cout << "Seleccione el tipo de transporte:\n";
    cout << "1. Bus\n";
    cout << "2. Metro\n";
    cout << "3. Taxi\n";
    cout << "Ingrese una opción (1-3): ";
    cin >> transporte;

    // Mostrar el costo estimado según el tipo de transporte
    switch (transporte) {
        case 1: 
            cout << "Costo estimado del viaje en Bus: $1.50\n";
            break;

        case 2: 
            cout << "Costo estimado del viaje en Metro: $2.00\n";
            break;

        case 3: 
            cout << "Costo estimado del viaje en Taxi: $10.00\n";
            break;

        default:
            cout << "Opción inválida. Por favor, seleccione un número entre 1 y 3.\n";
            break;
    }

    return 0;
}