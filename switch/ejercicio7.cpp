#include <iostream>
using namespace std;

int main() {
    int opcion;
    int cantidad;
    int resultado;

    do {
        // Menú de opciones
        cout << "\n--- Conversión de Monedas ---\n";
        cout << "1. USD a EUR (x0.91)\n";
        cout << "2. USD a JPY (x144)\n";
        cout << "3. USD a GBP (x0.78)\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese la cantidad en USD (entero): ";
                cin >> cantidad;
                resultado = cantidad * 91 / 100;  
                cout << cantidad << " USD son " << resultado << " EUR.\n";
                break;

            case 2:
                cout << "Ingrese la cantidad en USD (entero): ";
                cin >> cantidad;
                resultado = cantidad * 144;  
                cout << cantidad << " USD son " << resultado << " JPY.\n";
                break;

            case 3:
                cout << "Ingrese la cantidad en USD (entero): ";
                cin >> cantidad;
                resultado = cantidad * 78 / 100;  
                cout << cantidad << " USD son " << resultado << " GBP.\n";
                break;

            case 4:
                cout << "Saliendo...\n";
                break;

            default:
                cout << "Opción no válida.\n";
                break;
        }

    } while (opcion != 4);

    return 0;
}