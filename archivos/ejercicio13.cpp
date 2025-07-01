#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

void reemplazarPalabra(const string &buscada, const string &reemplazo) {
    ifstream archivo("texto.txt");
    if (!archivo) {
        cout << "No se pudo abrir texto.txt\n";
        return;
    }

    ostringstream contenido;
    string linea;
    while (getline(archivo, linea)) {
        size_t pos = 0;
        while ((pos = linea.find(buscada, pos)) != string::npos) {
            linea.replace(pos, buscada.length(), reemplazo);
            pos += reemplazo.length();
        }
        contenido << linea << '\n';
    }

    archivo.close();

    ofstream archivoSalida("texto.txt");
    archivoSalida << contenido.str();
    archivoSalida.close();

    cout << "Palabra reemplazada.\n";
}

int main() {
    string buscada, reemplazo;
    cout << "Palabra a buscar: ";
    cin >> buscada;
    cout << "Palabra de reemplazo: ";
    cin >> reemplazo;
    reemplazarPalabra(buscada, reemplazo);
    return 0;
}
