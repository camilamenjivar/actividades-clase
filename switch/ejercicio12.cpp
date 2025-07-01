#include <iostream>
using namespace std;

int main() {
    int estrellas;

    // Pedir el puntaje al usuario
    cout << "Ingrese el puntaje del jugador (1 a 5 estrellas): ";
    cin >> estrellas;

    switch (estrellas) {
        case 1:
            cout << "Puntaje: 1 estrella - Necesitas mejorar mucho." << endl;
            break;
        case 2:
            cout << "Puntaje: 2 estrellas - Debes esforzarte más." << endl;
            break;
        case 3:
            cout << "Puntaje: 3 estrellas - Buen desempeño, pero hay margen de mejora." << endl;
            break;
        case 4:
            cout << "Puntaje: 4 estrellas - Muy buen trabajo, sigue así." << endl;
            break;
        case 5:
            cout << "Puntaje: 5 estrellas - ¡Excelente jugador!" << endl;
            break;
        default:
            cout << "Puntaje inválido. Debe ser entre 1 y 5." << endl;
            break;
    }

    return 0;
}