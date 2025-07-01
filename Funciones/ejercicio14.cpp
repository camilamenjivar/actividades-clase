#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool validarContrasena(string contrasena) {
    if (contrasena.length() < 8)
        return false;

    bool tieneMayus = false, tieneNumero = false;

    for (char c : contrasena) {
        if (isupper(c)) tieneMayus = true;
        if (isdigit(c)) tieneNumero = true;
    }

    return tieneMayus && tieneNumero;
}

int main() {
    string clave;
    cout << "Ingrese la contraseña: ";
    cin >> clave;

    if (validarContrasena(clave))
        cout << "Contraseña válida." << endl;
    else
        cout << "Contraseña inválida." << endl;

    return 0;
}
