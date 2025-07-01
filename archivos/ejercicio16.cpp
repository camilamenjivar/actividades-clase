#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void dividirArchivo() {
    ifstream archivo("grande.txt");
    if (!archivo) {
        cout << "No se pudo abrir grande.txt\n";
        return;
    }

    const int lineasPorArchivo = 100;
    string linea;
    int contador = 0, archivoNum = 1;

    ofstream salida;
    salida.open("parte" + to_string(archivoNum) + ".txt");

    while (getline(archivo, linea)) {
        if (contador == lineasPorArchivo) {
            salida.close();
            archivoNum++;
            salida.open("parte" + to_string(archivoNum) + ".txt");
            contador = 0;
        }
        salida << linea << endl;
        contador++;
    }

    salida.close();
    archivo.close();
    cout << "Archivo dividido en partes de 100 líneas.\n";
}

int main() {
    dividirArchivo();
    return 0;
}
