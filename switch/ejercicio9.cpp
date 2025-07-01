#include <iostream>
using namespace std;

int main() {
    int mes;

    // Solicitar al usuario que ingrese el número del mes
    cout << "Ingrese el número del mes (1-12): ";
    cin >> mes;

    // Mostrar la cantidad de días según el mes 
    switch (mes) {
        case 1:
            cout << "Enero tiene 31 días." << endl;
            break;
        case 2:
            cout << "Febrero tiene 28 o 29 días (depende si es año bisiesto)." << endl;
            break;
        case 3:
            cout << "Marzo tiene 31 días." << endl;
            break;
        case 4:
            cout << "Abril tiene 30 días." << endl;
            break;
        case 5:
            cout << "Mayo tiene 31 días." << endl;
            break;
        case 6:
            cout << "Junio tiene 30 días." << endl;
            break;
        case 7:
            cout << "Julio tiene 31 días." << endl;
            break;
        case 8:
            cout << "Agosto tiene 31 días." << endl;
            break;
        case 9:
            cout << "Septiembre tiene 30 días." << endl;
            break;
        case 10:
            cout << "Octubre tiene 31 días." << endl;
            break;
        case 11:
            cout << "Noviembre tiene 30 días." << endl;
            break;
        case 12:
            cout << "Diciembre tiene 31 días." << endl;
            break;
        default:
            cout << "Número de mes inválido. Por favor ingresa un valor entre 1 y 12." << endl;
            break;
    }

    return 0;
}