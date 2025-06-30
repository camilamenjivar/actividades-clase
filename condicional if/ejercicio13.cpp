#include <iostream>
using namespace std;

int main() {
    int nota;

    cout << "Ingresa la calificacion (0 a 100): ";
    cin >> nota;

    if (nota >= 90 && nota <= 100) {
        cout << "Tu nota en letra es: A" << endl;
    }
    else if (nota >= 80 && nota <= 89) {
        cout << "Tu nota en letra es: B" << endl;
    }
    else if (nota >= 70 && nota <= 79) {
        cout << "Tu nota en letra es: C" << endl;
    }
    else if (nota >= 60 && nota <= 69) {
        cout << "Tu nota en letra es: D" << endl;
    }
    else if (nota >= 0 && nota < 60) {
        cout << "Tu nota en letra es: F" << endl;
    }
    else {
        cout << "Calificacion invalida. Debe estar entre 0 y 100." << endl;
    }

    return 0;
}
