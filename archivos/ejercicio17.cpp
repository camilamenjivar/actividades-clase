#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

void convertirMayusculas() {
    ifstream archivo("texto.txt");
    if (!archivo) {
        cout << "No se pudo abrir texto.txt\n";
        return;
    }

    ofstream salida("mayusculas.txt");
    if (!salida) {
        cout << "No se pudo crear mayusculas.txt\n";
        archivo.close();
        return;
    }

    string linea;
    while (getline(archivo, linea)) {
        for (char &c : linea) {
            c = toupper(c);
        }
        salida << linea << endl;
    }

    archivo.close();
    salida.close();
    cout << "Archivo convertido a mayúsculas en mayusculas.txt\n";
}

int main() {
    convertirMayusculas();
    return 0;
}
