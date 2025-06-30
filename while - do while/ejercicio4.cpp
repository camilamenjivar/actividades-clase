#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        // Mostrar el menú
        cout << "\n--- Menú Interactivo ---\n";
        cout << "1. Opción 1\n";
        cout << "2. Opción 2\n";
        cout << "3. Opción 3\n";
        cout << "4. Salir\n";
        cout << "Selecciona una opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Has seleccionado la Opción 1.\n";
                break;
            case 2:
                cout << "Has seleccionado la Opción 2.\n";
                break;
            case 3:
                cout << "Has seleccionado la Opción 3.\n";
                break;
            case 4:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción no válida, intenta de nuevo.\n";
        }

    } while(opcion != 4);

    return 0;
}