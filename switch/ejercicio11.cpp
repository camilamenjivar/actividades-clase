#include <iostream>
using namespace std;

int main() {
    int num1, num2, resultado = 1;
    char operacion;

    // Pedir los dos números al usuario
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Pedir la operación
    cout << "Ingrese la operación (+, -, *, /, ^ para potencia, % para módulo): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case '-':
            resultado = num1 - num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case '*':
            resultado = num1 * num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "Resultado: " << resultado << endl;
            } else {
                cout << "Error: División entre cero no permitida." << endl;
            }
            break;

        case '^':
            if (num2 < 0) {
                cout << "Error: Exponente negativo ." << endl;
            } else {
                resultado = 1;
                for (int i = 0; i < num2; i++) {
                    resultado *= num1;  
                }
                cout << "Resultado: " << resultado << endl;
            }
            break;

        case '%':
            if (num2 != 0) {
                resultado = num1 % num2;
                cout << "Resultado: " << resultado << endl;
            } else {
                cout << "Error: Módulo entre cero no es permitido." << endl;
            }
            break;

        default:
            cout << "Operación no válida." << endl;
            break;
    }

    return 0;
}