#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void contarLineas() {
    ifstream archivo("texto.txt");
    if (!archivo) {
        cout << "No se pudo abrir texto.txt\n";
        return;
    }

    int contador = 0;
    string linea;
    while (getline(archivo, linea)) {
        contador++;
    }

    archivo.close();
    cout << "El archivo tiene " << contador << " líneas.\n";
}

int main() {
    contarLineas();
    return 0;
}
