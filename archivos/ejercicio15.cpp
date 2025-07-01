#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool verificarUsuario(const string &nombre, const string &contraseña) {
    ifstream archivo("usuarios.txt");
    if (!archivo) {
        cout << "No se pudo abrir usuarios.txt\n";
        return false;
    }

    string user, pass;
    while (archivo >> user >> pass) {
        if (user == nombre && pass == contraseña) {
            archivo.close();
            return true;
        }
    }
    archivo.close();
    return false;
}

int main() {
    string nombre, contraseña;
    cout << "Usuario: ";
    cin >> nombre;
    cout << "Contraseña: ";
    cin >> contraseña;

    if (verificarUsuario(nombre, contraseña))
        cout << "Credenciales correctas.\n";
    else
        cout << "Usuario o contraseña incorrectos.\n";

    return 0;
}
