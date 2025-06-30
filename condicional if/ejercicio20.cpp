#include <iostream>
using namespace std;

int main() {
    int edad, infracciones, experiencia;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    cout << "Ingresa el numero de infracciones: ";
    cin >> infracciones;

    cout << "Ingresa tus años de experiencia como conductor: ";
    cin >> experiencia;

    if (edad >= 25 && infracciones == 0 && experiencia >= 5) {
        cout << "Conductor excelente." << endl;
    }
    else if (edad >= 18 && infracciones <= 2 && experiencia >= 2) {
        cout << "Conductor aceptable." << endl;
    }
    else if (infracciones > 2 || experiencia < 2) {
        cout << "Conductor en observacion." << endl;
    }
    else {
        cout << "Datos insuficientes o no califica." << endl;
    }

    return 0;
}
