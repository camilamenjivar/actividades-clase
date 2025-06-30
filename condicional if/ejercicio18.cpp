#include <iostream>
#include <string>
using namespace std;

int main() {
    string contrasena1, contrasena2;

    cout << "Crea una contrasena: ";
    cin >> contrasena1;

    cout << "Vuelve a escribir la contrasena: ";
    cin >> contrasena2;

    if (contrasena1 == contrasena2) {
        cout << "Contrasena confirmada correctamente." << endl;
    } else {
        cout << "Las contrasenas no coinciden. Intenta de nuevo." << endl;
    }

    return 0;
}
