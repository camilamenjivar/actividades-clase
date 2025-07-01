#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void buscarPalabra() {
    ifstream archivo("texto.txt");
    if (!archivo) {
        cout << "No se pudo abrir texto.txt\n";
        return;
    }

    string palabra, palabraArchivo;
    int contador = 0;

    cout << "Escribe la palabra a buscar: ";
    cin >> palabra;

    while (archivo >> palabraArchivo) {
        if (palabraArchivo == palabra) {
            contador++;
        }
    }

    archivo.close();
    cout << "La palabra '" << palabra << "' aparece " << contador << " veces.\n";
}

int main() {
    buscarPalabra();
    return 0;
}
