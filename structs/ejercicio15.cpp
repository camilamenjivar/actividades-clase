#include <iostream>
#include <string>
using namespace std;

struct Libro {
    string titulo;
    string autor;
    int copias;
};

void registrarLibro(Libro &l) {
    cout << "Titulo: ";
    cin.ignore();
    getline(cin, l.titulo);
    cout << "Autor: ";
    getline(cin, l.autor);
    cout << "Cantidad de copias: ";
    cin >> l.copias;
}

void prestarLibro(Libro &l) {
    if (l.copias > 0) {
        l.copias--;
        cout << "Libro prestado.\n";
    } else {
        cout << "No hay copias disponibles.\n";
    }
}

void mostrarLibro(const Libro &l) {
    cout << "Titulo: " << l.titulo << ", Autor: " << l.autor << ", Copias disponibles: " << l.copias << endl;
}

int main() {
    Libro libro;
    registrarLibro(libro);
    prestarLibro(libro);
    mostrarLibro(libro);
    return 0;
}
