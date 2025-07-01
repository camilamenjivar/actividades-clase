#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void compararArchivos() {
    ifstream archivo1("archivo1.txt");
    ifstream archivo2("archivo2.txt");

    if (!archivo1 || !archivo2) {
        cout << "No se pudieron abrir los archivos.\n";
        return;
    }

    string linea1, linea2;
    bool iguales = true;

    while (getline(archivo1, linea1) && getline(archivo2, linea2)) {
        if (linea1 != linea2) {
            iguales = false;
            break;
        }
    }

    // Si uno tiene más líneas
    if ((getline(archivo1, linea1) && !getline(archivo2, linea2)) ||
        (!getline(archivo1, linea1) && getline(archivo2, linea2))) {
        iguales = false;
    }

    archivo1.close();
    archivo2.close();

    if (iguales)
        cout << "Los archivos son iguales.\n";
    else
        cout << "Los archivos son diferentes.\n";
}

int main() {
    compararArchivos();
    return 0;
}
