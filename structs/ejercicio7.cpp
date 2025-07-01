#include <iostream>
using namespace std;

struct FechaHora {
    int dia;
    int mes;
    int anio;
    int hora;
    int minutos;
};

int main() {
    int N;
    cout << "¿Cuántas fechas desea registrar? ";
    cin >> N;

    FechaHora fechas[100]; // arreglo para almacenar hasta 100 fechas

    for (int i = 0; i < N; i++) {
        cout << "\nFecha #" << i + 1 << endl;

        cout << "Día: ";
        cin >> fechas[i].dia;

        cout << "Mes: ";
        cin >> fechas[i].mes;

        cout << "Año: ";
        cin >> fechas[i].anio;

        cout << "Hora (0-23): ";
        cin >> fechas[i].hora;

        cout << "Minutos (0-59): ";
        cin >> fechas[i].minutos;
    }

    cout << "\n--- Fechas registradas ---\n";
    for (int i = 0; i < N; i++) {
        cout << "Fecha #" << i + 1 << ": ";
        cout << fechas[i].dia << "/" << fechas[i].mes << "/" << fechas[i].anio << " ";
        cout << fechas[i].hora << ":";

        // Mostrar minutos con dos dígitos (ej. 05)
        if (fechas[i].minutos < 10) cout << "0";
        cout << fechas[i].minutos << endl;
    }

    return 0;
}