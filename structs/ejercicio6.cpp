#include <iostream>
#include <string>
using namespace std;

struct Vehiculo {
    string marca;
    string modelo;
    int anio;
};

int main() {
    int N;
    cout << "¿Cuántos vehículos desea registrar? ";
    cin >> N;
    cin.ignore(); // limpiar buffer

    Vehiculo vehiculos[100]; // arreglo con capacidad para 100 vehículos

    for (int i = 0; i < N; i++) {
        cout << "\nVehículo #" << i + 1 << endl;

        cout << "Marca: ";
        getline(cin, vehiculos[i].marca);

        cout << "Modelo: ";
        getline(cin, vehiculos[i].modelo);

        cout << "Año: ";
        cin >> vehiculos[i].anio;
        cin.ignore(); // limpiar buffer para siguiente iteración
    }

    cout << "\n--- Vehículos registrados ---\n";
    for (int i = 0; i < N; i++) {
        cout << "\nVehículo #" << i + 1 << endl;
        cout << "Marca: " << vehiculos[i].marca << endl;
        cout << "Modelo: " << vehiculos[i].modelo << endl;
        cout << "Año: " << vehiculos[i].anio << endl;
    }

    return 0;
}