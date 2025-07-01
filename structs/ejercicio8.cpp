#include <iostream>
#include <string>
using namespace std;

struct Articulo {
    string nombre;
    string codigo;
    float precio;
};

int main() {
    int N;
    cout << "¿Cuántos artículos desea registrar? ";
    cin >> N;
    cin.ignore(); // limpiar buffer

    Articulo articulos[100]; // arreglo para hasta 100 artículos

    for (int i = 0; i < N; i++) {
        cout << "\nArtículo #" << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, articulos[i].nombre);

        cout << "Código: ";
        getline(cin, articulos[i].codigo);

        cout << "Precio: ";
        cin >> articulos[i].precio;
        cin.ignore(); // limpiar buffer para la siguiente iteración
    }

    cout << "\n--- Artículos registrados ---\n";
    for (int i = 0; i < N; i++) {
        cout << "\nArtículo #" << i + 1 << endl;
        cout << "Nombre: " << articulos[i].nombre << endl;
        cout << "Código: " << articulos[i].codigo << endl;
        cout << "Precio: $" << articulos[i].precio << endl;
    }

    return 0;
}