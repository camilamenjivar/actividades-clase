#include <iostream>
using namespace std;

int main() {
    int nota;

    // Solicitar la calificación al usuario
    cout << "Ingresa una calificación (0 - 100): ";
    cin >> nota;

    
    if (nota < 0 || nota > 100) {
        cout << "Calificación inválida." << endl;
        return 1; // Finaliza el programa si es inválida
    }

    // Usamos división entera para agrupar las calificaciones por decenas
    switch (nota / 10) {
        case 10: 
        case 9:  
            cout << "Calificación: A" << endl;
            break;
        case 8:  
            cout << "Calificación: B" << endl;
            break;
        case 7: 
            cout << "Calificación: C" << endl;
            break;
        case 6:  
            cout << "Calificación: D" << endl;
            break;
        default: 
            cout << "Calificación: F" << endl;
    }

    return 0;
}