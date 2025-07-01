#include <iostream>
using namespace std;

int main() {
    int opcion;
    double num1, num2, resultado;

    do {
        // Mostrar el menú
        cout << "\n=== Calculadora Simple ===\n";
        cout << "1. Suma\n";
        cout << "2. Resta\n";
        cout << "3. Multiplicación\n";
        cout << "4. División\n";
        cout << "5. Salir\n";
        cout << "Elija una opción: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
           
            cout << "Ingrese el primer número: ";
            cin >> num1;
            cout << "Ingrese el segundo número: ";
            cin >> num2;
        }

        switch (opcion) {
            case 1: // Suma
                resultado = num1 + num2;
                cout << "Resultado de la suma: " << resultado << endl;
                break;
            case 2: // Resta
                resultado = num1 - num2;
                cout << "Resultado de la resta: " << resultado << endl;
                break;
            case 3: // Multiplicación
                resultado = num1 * num2;
                cout << "Resultado de la multiplicación: " << resultado << endl;
                break;
            case 4: // División
                if (num2 != 0) {
                    resultado = num1 / num2;
                    cout << "Resultado de la división: " << resultado << endl;
                } else {
                    cout << "Error: No se puede dividir entre cero." << endl;
                }
                break;
            case 5: 
                cout << "Saliendo de la calculadora. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción inválida. Por favor, elija entre 1 y 5." << endl;
        }

    } while (opcion != 5);

    return 0;
}