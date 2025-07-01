#include <iostream>
#include <string>
using namespace std;

// Definición de la estructura Persona
struct Persona {
    string nombre;
    int edad;
    float estatura; // en metros, por ejemplo
};

int main() {
    int n;
    cout << "¿Cuántas personas desea registrar? ";
    cin >> n;
    cin.ignore(); // limpiar buffer para getline

    Persona personas[100]; // arreglo para almacenar personas (máximo 100)

    // Ingreso de datos
    for (int i = 0; i < n; i++) {
        cout << "\nPersona #" << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, personas[i].nombre);

        cout << "Edad: ";
        cin >> personas[i].edad;

        cout << "Estatura (en metros): ";
        cin >> personas[i].estatura;
        cin.ignore(); // limpiar buffer para la siguiente iteración
    }

    // Buscar la persona más alta
    int indiceMasAlta = 0;
    for (int i = 1; i < n; i++) {
        if (personas[i].estatura > personas[indiceMasAlta].estatura) {
            indiceMasAlta = i;
        }
    }

    // Mostrar resultado
    cout << "\nLa persona más alta es:\n";
    cout << "Nombre: " << personas[indiceMasAlta].nombre << endl;
    cout << "Edad: " << personas[indiceMasAlta].edad << endl;
    cout << "Estatura: " << personas[indiceMasAlta].estatura << " metros\n";

    return 0;
}