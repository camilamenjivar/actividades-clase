#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void escribirMensaje() {
    ofstream archivo("mensaje.txt");
    if (!archivo) {
        cout << "No se pudo abrir el archivo.\n";
        return;
    }

    string mensaje;
    cout << "Escribe un mensaje: ";
    getline(cin, mensaje);
    archivo << mensaje << endl;
    archivo.close();
    cout << "Mensaje guardado en mensaje.txt\n";
}

int main() {
    escribirMensaje();
    return 0;
}
