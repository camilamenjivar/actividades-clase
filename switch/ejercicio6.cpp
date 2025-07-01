#include <iostream>
using namespace std;

int main() {
    int tipo;

    cout << "Seleccione el tipo de vehículo:\n";
    cout << "1. Coche\n";
    cout << "2. Moto\n";
    cout << "3. Bicicleta\n";
    cout << "4. Camión\n";


    cout << "Ingrese el número correspondiente: ";
    cin >> tipo;

    // Evaluar la opción usando switch
    switch (tipo) {
        case 1:
            cout << "Coche: Vehículo de motor con cuatro ruedas para transporte de personas.\n";
            break;
        case 2:
            cout << "Moto: Vehículo de motor con dos ruedas, ágil y rápido.\n";
            break;
        case 3:
            cout << "Bicicleta: Vehículo sin motor impulsado por pedales.\n";
            break;
        case 4:
            cout << "Camión: Vehículo grande para transportar mercancías.\n";
            break;
        default:
            // Opción no válida
            cout << "Tipo de vehículo no reconocido.\n";
    }

    return 0;
}