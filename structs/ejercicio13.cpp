#include <iostream>
#include <string>
using namespace std;

struct Pelicula {
    string titulo;
    string director;
    int duracion; // minutos
};

void registrarPelicula(Pelicula &p) {
    cout << "Titulo: ";
    cin.ignore();
    getline(cin, p.titulo);
    cout << "Director: ";
    getline(cin, p.director);
    cout << "Duracion (minutos): ";
    cin >> p.duracion;
}

void mostrarPelicula(const Pelicula &p) {
    cout << "\nPelicula:\n";
    cout << "Titulo: " << p.titulo << endl;
    cout << "Director: " << p.director << endl;
    cout << "Duracion: " << p.duracion << " minutos\n";
}

int main() {
    Pelicula peli;
    registrarPelicula(peli);
    mostrarPelicula(peli);
    return 0;
}
