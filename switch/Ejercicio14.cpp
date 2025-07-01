#include <iostream>
using namespace std;

int main() {
    int edad;
    int categoria;

    // Pedir la edad al usuario
    cout << "Ingrese su edad: ";
    cin >> edad;

    
    if (edad < 0) {
        categoria = 0; // edad no valida
    } else if (edad <= 6) {
        categoria = 1; 
    } else if (edad <= 12) {
        categoria = 2; 
    } else if (edad <= 16) {
        categoria = 3; 
    } else {
        categoria = 4; 
    }

    switch (categoria) {
        case 0:
            cout << "Edad inválida. Por favor ingrese una edad correcta." << endl;
            break;
        case 1:
            cout << "Categoría recomendada: G (Para todo público)" << endl;
            break;
        case 2:
            cout << "Categoría recomendada: PG (Guía parental sugerida)" << endl;
            break;
        case 3:
            cout << "Categoría recomendada: PG-13 (Algunas material no apto para menores de 13)" << endl;
            break;
        case 4:
            cout << "Categoría recomendada: R (Restringida, solo mayores de 17)" << endl;
            break;
        default:
            cout << "Error desconocido." << endl;
            break;
    }

    return 0;
}