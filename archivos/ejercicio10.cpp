#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    float promedio;
};

void mostrarEstudiantes() {
    ifstream archivo("estudiantes.txt");
    if (!archivo) {
        cout << "No se pudo abrir estudiantes.txt\n";
        return;
    }

    Estudiante est;
    cout << "Estudiantes:\n";
    while (archivo >> est.nombre >> est.promedio) {
        cout << est.nombre << " - Promedio: " << est.promedio << endl;
    }

    archivo.close();
}

int main() {
    mostrarEstudiantes();
    return 0;
}
