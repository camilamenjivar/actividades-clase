#include <iostream>
#include <string>
using namespace std;

struct Evento {
    string nombre;
    string fecha;
    string hora;
};

void registrarEvento(Evento &e) {
    cout << "Nombre del evento: ";
    cin.ignore();
    getline(cin, e.nombre);
    cout << "Fecha (dd/mm/aaaa): ";
    getline(cin, e.fecha);
    cout << "Hora (hh:mm): ";
    getline(cin, e.hora);
}

void mostrarEvento(const Evento &e) {
    cout << "Evento: " << e.nombre << ", Fecha: " << e.fecha << ", Hora: " << e.hora << endl;
}

int main() {
    Evento evento;
    registrarEvento(evento);
    mostrarEvento(evento);
    return 0;
}
