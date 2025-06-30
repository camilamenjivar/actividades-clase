#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuarioCorrecto = "admin";
    string contrasenaCorrecta = "1234";

    string usuarioIngresado, contrasenaIngresada;

    
    cout << "Usuario: ";
    cin >> usuarioIngresado;

    cout << "Contraseña: ";
    cin >> contrasenaIngresada;

    
    if (usuarioIngresado == usuarioCorrecto && contrasenaIngresada == contrasenaCorrecta) {
        cout << "Acceso perimitido. Bienvenido, " << usuarioIngresado << "!" << endl;
    } else {
        cout << "Acceso denegado. Usuario o contraseña incorrectos." << endl;
    }

    return 0;
}