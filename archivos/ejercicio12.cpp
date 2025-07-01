#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void eliminarLinea(int lineaEliminar) {
    ifstream archivo("texto.txt");
    if (!archivo) {
        cout << "No se pudo abrir texto.txt\n";
        return;
    }

    ofstream temp("temp.txt");
    string linea;
    int numeroLinea = 1;

    while (getline(archivo, linea)) {
        if (numeroLinea != lineaEliminar)
            temp << linea << endl;
        numeroLinea++;
    }

    archivo.close();
    temp.close();

    remove("texto.txt");
    rename("temp.txt", "texto.txt");

    cout << "Linea " << lineaEliminar << " eliminada.\n";
}

int main() {
    int linea;
    cout << "Numero de la linea a eliminar: ";
    cin >> linea;
    eliminarLinea(linea);
    return 0;
}
