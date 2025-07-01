#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void copiarArchivo() {
    ifstream origen("origen.txt");
    if (!origen) {
        cout << "No se pudo abrir origen.txt\n";
        return;
    }

    ofstream destino("destino.txt");
    if (!destino) {
        cout << "No se pudo abrir destino.txt\n";
        origen.close();
        return;
    }

    string linea;
    while (getline(origen, linea)) {
        destino << linea << endl;
    }

    origen.close();
    destino.close();
    cout << "Archivo copiado de origen.txt a destino.txt\n";
}

int main() {
    copiarArchivo();
    return 0;
}
