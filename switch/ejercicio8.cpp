#include <iostream>
using namespace std;

int main() {
    int lado1, lado2, lado3;
    int tipoTriangulo; 
    
    cout << "Ingrese el lado 1: ";
    cin >> lado1;
    cout << "Ingrese el lado 2: ";
    cin >> lado2;
    cout << "Ingrese el lado 3: ";
    cin >> lado3;

    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0 ||
        (lado1 + lado2 <= lado3) || (lado1 + lado3 <= lado2) || (lado2 + lado3 <= lado1)) {
        cout << "Los lados ingresados no forman un triángulo válido.\n";
        return 0;
    }

    
    if (lado1 == lado2 && lado2 == lado3) {
        tipoTriangulo = 1; 
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        tipoTriangulo = 2; 
    } else {
        tipoTriangulo = 3; 
    }

    
    switch (tipoTriangulo) {
        case 1:
            cout << "El triángulo es equilátero.\n";
            break;
        case 2:
            cout << "El triángulo es isósceles.\n";
            break;
        case 3:
            cout << "El triángulo es escaleno.\n";
            break;
        default:
            cout << "Error desconocido.\n";
    }

    return 0;
}