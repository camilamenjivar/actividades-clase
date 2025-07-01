#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

void leerCSV() {
    ifstream archivo("datos.csv");
    if (!archivo) {
        cout << "No se pudo abrir datos.csv\n";
        return;
    }

    string linea;
    cout << "Datos en formato tabular:\n";
    while (getline(archivo, linea)) {
        stringstream ss(linea);
        string celda;
        while (getline(ss, celda, ',')) {
            cout << celda << "\t";
        }
        cout << endl;
    }

    archivo.close();
}

int main() {
    leerCSV();
    return 0;
}
