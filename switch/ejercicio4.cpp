#include <iostream>
using namespace std;

int main() {
    int opcion;

    // Menú interactivo que se repite hasta que el usuario elige salir
    do {
        // Mostrar el menú
        cout << "\n====== MENÚ DE OPCIONES ======" << endl;
        cout << "1. Saludar" << endl;
        cout << "2. Mostrar número favorito" << endl;
        cout << "3. Mostrar mensaje motivador" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opción (1-4): ";
        cin >> opcion;

        
        switch (opcion) {
            case 1:
                cout << " Espero que tengas un gran día :)" << endl;
                break;
            case 2:
                cout << "Mi número favorito es el 1. ¿Y el tuyo?" << endl;
                break;
            case 3:
                cout << "¡Sigue adelante y nunca te rindas!" << endl;
                break;
            case 4:
                cout << "Saliendo del programa... ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción inválida. Por favor, selecciona entre 1 y 4." << endl;
        }

    } while (opcion != 4); 

    return 0;
}