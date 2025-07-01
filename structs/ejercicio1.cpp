#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura
struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

int main() {
    int n;

    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;
    cin.ignore(); // Limpiar el buffer

    Estudiante estudiantes[100]; // Asumiendo un máximo de 100 estudiantes

    for (int i = 0; i < n; i++) {
        cout << "\nEstudiante #" << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, estudiantes[i].nombre);

        cout << "Edad: ";
        cin >> estudiantes[i].edad;

        cout << "Promedio: ";
        cin >> estudiantes[i].promedio;

        cin.ignore(); // Limpiar buffer antes de getline
    }

    // Mostrar resultados
    cout << "\n--- Lista de Estudiantes ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nEstudiante #" << i + 1 << endl;
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "Promedio: " << estudiantes[i].promedio << endl;
    }

    return 0;
}