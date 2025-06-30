#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuarioCorrecto = "admin";
    string contrasenaCorrecta = "1234";
    string usuario, contrasena;

    bool accesoConcedido = false;

    for (int intento = 1; intento <= 3; intento++) {
        cout << "Intento " << intento << " de 3" << endl;

        cout << "Usuario: ";
        cin >> usuario;

        cout << "Contrasena: ";
        cin >> contrasena;

        if (usuario == usuarioCorrecto && contrasena == contrasenaCorrecta) {
            cout << "Acceso concedido. Bienvenido!" << endl;
            accesoConcedido = true;
            break; // salir del ciclo si los datos son correctos
        } else {
            cout << "Usuario o contrasena incorrectos." << endl;
        }
    }

    if (!accesoConcedido) {
        cout << "Has excedido el numero de intentos. Acceso denegado." << endl;
    }

    return 0;
}
