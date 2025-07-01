#include <iostream>
#include <string>
using namespace std;

struct Habitacion {
    int numero;
    string tipo;
    bool ocupada;
};

void registrarHabitacion(Habitacion &h) {
    cout << "Numero de habitacion: ";
    cin >> h.numero;
    cout << "Tipo (individual/doble): ";
    cin >> h.tipo;
    h.ocupada = false;
}

void mostrarHabitacionesDisponibles(Habitacion habitaciones[], int n) {
    cout << "\nHabitaciones disponibles:\n";
    for (int i = 0; i < n; i++) {
        if (!habitaciones[i].ocupada)
            cout << "Habitacion " << habitaciones[i].numero << " (" << habitaciones[i].tipo << ")\n";
    }
}

void reservarHabitacion(Habitacion habitaciones[], int n, int num) {
    for (int i = 0; i < n; i++) {
        if (habitaciones[i].numero == num && !habitaciones[i].ocupada) {
            habitaciones[i].ocupada = true;
            cout << "Habitacion reservada.\n";
            return;
        }
    }
    cout << "Habitacion no disponible.\n";
}

int main() {
    int n;
    cout << "Cuantas habitaciones registrar? ";
    cin >> n;
    Habitacion habitaciones[n];
    for (int i = 0; i < n; i++)
        registrarHabitacion(habitaciones[i]);

    mostrarHabitacionesDisponibles(habitaciones, n);

    int numReserva;
    cout << "Ingrese numero de habitacion a reservar: ";
    cin >> numReserva;
    reservarHabitacion(habitaciones, n, numReserva);

    mostrarHabitacionesDisponibles(habitaciones, n);

    return 0;
}
