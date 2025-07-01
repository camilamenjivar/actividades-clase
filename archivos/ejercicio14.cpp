#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Usuario {
    string nombre;
    string contraseña;
};

void registrarUsuario() {
    ofstream archivo("usuarios.txt", ios::app);
    if (!archivo) {
        cout << "No se pudo abrir usuarios.txt\n";
        return;
    }

    Usuario u;
    cout << "Nombre de usuario: ";
    cin >> u.nombre;
    cout << "Contraseña: ";
    cin >> u.contraseña;

    archivo << u.nombre << " " << u.contraseña << endl;
    archivo.close();

    cout << "Usuario registrado.\n";
}

int main() {
    registrarUsuario();
    return 0;
}
