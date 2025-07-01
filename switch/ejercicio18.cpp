#include <iostream>
using namespace std;

int main() {
    int opcion;
    double valor, resultado;

    // Mostrar menú de conversiones
    cout << "Seleccione la conversión de unidades de longitud:\n";
    cout << "1. Centímetros a pulgadas\n";
    cout << "2. Metros a pies\n";
    cout << "3. Kilómetros a millas\n";
    cout << "Ingrese una opción (1-3): ";
    cin >> opcion;

    // Procesar según la opción seleccionada
    switch (opcion) {
        case 1:
            cout << "Ingrese la cantidad en centímetros: ";
            cin >> valor;
            resultado = valor / 2.54;  
            cout << valor << " cm son " << resultado << " pulgadas.\n";
            break;

        case 2:
            cout << "Ingrese la cantidad en metros: ";
            cin >> valor;
            resultado = valor * 3.28084;  
            cout << valor << " metros son " << resultado << " pies.\n";
            break;

        case 3:
            cout << "Ingrese la cantidad en kilómetros: ";
            cin >> valor;
            resultado = valor * 0.621371;  
            cout << valor << " km son " << resultado << " millas.\n";
            break;

        default:
            cout << "Opción no válida. Por favor seleccione 1, 2 o 3.\n";
            break;
    }

    return 0;
}