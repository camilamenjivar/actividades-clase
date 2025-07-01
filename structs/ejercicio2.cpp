#include <iostream>
#include <string>
using namespace std;

struct Libro {
    string titulo;
    string autor;
    int anio;
};

void registrarLibro(Libro &libro) {
    cout << "Titulo: ";
    cin.ignore();
    getline(cin, libro.titulo);
    cout << "Autor: ";
    getline(cin, libro.autor);
    cout << "Año de publicacion: ";
    cin >> libro.anio;
}

void mostrarLibro(const Libro &libro) {
    cout << "\nLibro:" << endl;
    cout << "Titulo: " << libro.titulo << endl;
    cout << "Autor: " << libro.autor << endl;
    cout << "Año: " << libro.anio << endl;
}

int main() {
    Libro libro;
    registrarLibro(libro);
    mostrarLibro(libro);

    return 0;
}
