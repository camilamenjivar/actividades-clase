#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void añadirTexto() {
    ofstream archivo("mensaje.txt", ios::app);
    if (!archivo) {
        cout << "No se pudo abrir mensaje.txt\n";
        return;
    }

    string texto;
    cout << "Escribe el texto a añadir: ";
    cin.ignore();
    getline(cin, texto);
    archivo << texto << endl;
    archivo.close();
    cout << "Texto añadido al archivo mensaje.txt\n";
}

int main() {
    añadirTexto();
    return 0;
}
