#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    float promedio;
};

void guardarEstudiantes() {
    ofstream archivo("estudiantes.txt");
    if (!archivo) {
        cout << "No se pudo abrir estudiantes.txt\n";
        return;
    }

    int n;
    cout << "¿Cuántos estudiantes quieres ingresar? ";
    cin >> n;

    Estudiante est;
    for (int i = 0; i < n; i++) {
        cout << "Nombre del estudiante: ";
        cin >> est.nombre;
        cout << "Promedio: ";
        cin >> est.promedio;
        archivo << est.nombre << " " << est.promedio << endl;
    }

    archivo.close();
    cout << "Datos guardados en estudiantes.txt\n";
}

int main() {
    guardarEstudiantes();
    return 0;
}
