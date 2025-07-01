#include <iostream>
#include <string>
using namespace std;

struct Paciente {
    string nombre;
    int edad;
    string diagnostico;
};

int main() {
    int N;
    cout << "¿Cuántos pacientes desea registrar? ";
    cin >> N;
    cin.ignore(); // limpiar buffer

    Paciente pacientes[100]; // arreglo para hasta 100 pacientes

    for (int i = 0; i < N; i++) {
        cout << "\nPaciente #" << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, pacientes[i].nombre);

        cout << "Edad: ";
        cin >> pacientes[i].edad;
        cin.ignore();

        cout << "Diagnóstico: ";
        getline(cin, pacientes[i].diagnostico);
    }

    cout << "\n--- Pacientes registrados ---\n";
    for (int i = 0; i < N; i++) {
        cout << "\nPaciente #" << i + 1 << endl;
        cout << "Nombre: " << pacientes[i].nombre << endl;
        cout << "Edad: " << pacientes[i].edad << endl;
        cout << "Diagnóstico: " << pacientes[i].diagnostico << endl;
    }

    return 0;
}