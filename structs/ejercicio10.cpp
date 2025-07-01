#include <iostream>
#include <string>
using namespace std;

struct Contacto {
    string nombre;
    string telefono;
};

int main() {
    const int MAX = 100;
    Contacto contactos[MAX];
    int contador = 0;

    int opcion;
    do {
        cout << "\nMenú:\n";
        cout << "1. Agregar contacto\n";
        cout << "2. Buscar contacto por nombre\n";
        cout << "3. Mostrar todos los contactos\n";
        cout << "4. Salir\n";
        cout << "Elija una opción: ";
        cin >> opcion;
        cin.ignore(); // limpiar buffer

        if (opcion == 1) {
            if (contador >= MAX) {
                cout << "No se pueden agregar más contactos.\n";
            } else {
                cout << "Nombre: ";
                getline(cin, contactos[contador].nombre);
                cout << "Teléfono: ";
                getline(cin, contactos[contador].telefono);
                contador++;
                cout << "Contacto agregado.\n";
            }
        } else if (opcion == 2) {
            string buscar;
            cout << "Ingrese el nombre a buscar: ";
            getline(cin, buscar);

            bool encontrado = false;
            for (int i = 0; i < contador; i++) {
                if (contactos[i].nombre == buscar) {
                    cout << "Contacto encontrado:\n";
                    cout << "Nombre: " << contactos[i].nombre << endl;
                    cout << "Teléfono: " << contactos[i].telefono << endl;
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado) {
                cout << "Contacto no encontrado.\n";
            }
        } else if (opcion == 3) {
            if (contador == 0) {
                cout << "No hay contactos registrados.\n";
            } else {
                cout << "\nLista de contactos:\n";
                for (int i = 0; i < contador; i++) {
                    cout << i + 1 << ". " << contactos[i].nombre << " - " << contactos[i].telefono << endl;
                }
            }
        } else if (opcion == 4) {
            cout << "Saliendo...\n";
        } else {
            cout << "Opción no válida. Intente de nuevo.\n";
        }

    } while (opcion != 4);

    return 0;
}