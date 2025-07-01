#include <iostream>
using namespace std;

int main() {
    int multas;

    // Solicitar cantidad de multas al conductor
    cout << "Ingrese la cantidad de multas recibidas: ";
    cin >> multas;

    // Evaluar nivel de riesgo según multas usando switch
    switch (multas) {
        case 0:
            cout << "Nivel de riesgo: Bajo. ¡Buen historial de manejo!\n";
            break;
        case 1:
        case 2:
            cout << "Nivel de riesgo: Moderado. Sea más cuidadoso.\n";
            break;
        case 3:
        case 4:
            cout << "Nivel de riesgo: Alto. Riesgo considerable.\n";
            break;
        default:
            if (multas >= 5)
                cout << "Nivel de riesgo: Muy alto. Requiere atención inmediata.\n";
            else
                cout << "Número de multas inválido.\n";
            break;
    }

    return 0;
}