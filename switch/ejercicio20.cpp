#include <iostream>
using namespace std;

int main() {
    char inicial;

    // Pedir la inicial del apellido 
    cout << "Ingrese la inicial del apellido del estudiante: ";
    cin >> inicial;

    // Convertir a mayúscula para simplificar la comparación
    if (inicial >= 'a' && inicial <= 'z') {
        inicial = inicial - 'a' + 'A';
    }

    // Asignar grupo según inicial usando switch
    switch (inicial) {
        case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': case 'G':
        case 'H': case 'I': case 'J': case 'K': case 'L': case 'M':
            cout << "El estudiante pertenece al Grupo 1.\n";
            break;

        case 'N': case 'O': case 'P': case 'Q': case 'R': case 'S':
        case 'T': case 'U': case 'V': case 'W': case 'X': case 'Y': case 'Z':
            cout << "El estudiante pertenece al Grupo 2.\n";
            break;

        default:
            cout << "Inicial inválida. Por favor, ingrese una letra del alfabeto.\n";
            break;
    }

    return 0;
}