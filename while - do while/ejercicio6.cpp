#include <iostream>
#include <string>
using namespace std;

int main() {
    string contrasenaCorrecta = "12345";  
    string contrasenaIngresada;

    do {
        // Pedir la contraseña al usuario
        cout << "Ingresa la contraseña: ";
        cin >> contrasenaIngresada;

        // Verificar si la contraseña es incorrecta
        if (contrasenaIngresada != contrasenaCorrecta) {
            cout << "Contraseña incorrecta. Intenta de nuevo.\n";
        }
    } while (contrasenaIngresada != contrasenaCorrecta);

    cout << "¡Contraseña correcta! Acceso concedido.\n";

    return 0;
}