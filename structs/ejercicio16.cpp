#include <iostream>
#include <string>
using namespace std;

struct Pedido {
    int numOrden;
    string platillo;
    float precio;
};

float calcularTotal(Pedido pedidos[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++)
        total += pedidos[i].precio;
    return total;
}

void registrarPedidos(Pedido pedidos[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Pedido #" << i+1 << endl;
        cout << "Numero de orden: ";
        cin >> pedidos[i].numOrden;
        cout << "Platillo: ";
        cin >> pedidos[i].platillo;
        cout << "Precio: ";
        cin >> pedidos[i].precio;
    }
}

int main() {
    int n;
    cout << "Cuantos pedidos desea ingresar? ";
    cin >> n;
    Pedido pedidos[n];
    registrarPedidos(pedidos, n);
    cout << "Total a pagar: $" << calcularTotal(pedidos, n) << endl;
    return 0;
}
