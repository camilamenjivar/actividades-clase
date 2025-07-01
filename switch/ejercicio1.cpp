#include <iostream>
using namespace std;

int main() {
    int dia;

    // Pedimos al usuario que ingrese un número del 1 al 7
    cout << "Ingresa un número del 1 al 7: ";
    cin >> dia;

    switch (dia) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miércoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sábado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            // Si el número no está entre 1 y 7, se muestra mensaje de error
            cout << "Número inválido. Debe ser del 1 al 7." << endl;
    }

    return 0;
}