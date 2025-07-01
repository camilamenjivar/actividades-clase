#include <iostream>
#include <string>
using namespace std;

struct Producto {
    string nombre;
    float precio;
    int cantidad;
};

void registrarProductos(Producto productos[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Producto #" << i+1 << endl;
        cout << "Nombre: ";
        cin >> productos[i].nombre;
        cout << "Precio: ";
        cin >> productos[i].precio;
        cout << "Cantidad en inventario: ";
        cin >> productos[i].cantidad;
    }
}

void mostrarProductos(Producto productos[], int n) {
    cout << "\nProductos registrados:" << endl;
    for (int i = 0; i < n; i++) {
        cout << productos[i].nombre << ", Precio: $" << productos[i].precio << ", Cantidad: " << productos[i].cantidad << endl;
    }
}

int main() {
    int n;
    cout << "¿Cuántos productos quieres registrar? ";
    cin >> n;

    Producto productos[n];
    registrarProductos(productos, n);
    mostrarProductos(productos, n);

    return 0;
}
