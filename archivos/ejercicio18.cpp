#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Transaccion {
    string tipo; // "deposito" o "retiro"
    float monto;
};

void registrarTransacciones() {
    ofstream archivo("transacciones.txt", ios::app);
    if (!archivo) {
        cout << "No se pudo abrir transacciones.txt\n";
        return;
    }

    int n;
    cout << "Cuántas transacciones registrar? ";
    cin >> n;

    Transaccion t;
    for (int i = 0; i < n; i++) {
        cout << "Tipo (deposito/retiro): ";
        cin >> t.tipo;
        cout << "Monto: ";
        cin >> t.monto;
        archivo << t.tipo << " " << t.monto << endl;
    }

    archivo.close();
    cout << "Transacciones registradas.\n";
}

void calcularSaldo() {
    ifstream archivo("transacciones.txt");
    if (!archivo) {
        cout << "No se pudo abrir transacciones.txt\n";
        return;
    }

    string tipo;
    float monto, saldo = 0;
    while (archivo >> tipo >> monto) {
        if (tipo == "deposito")
            saldo += monto;
        else if (tipo == "retiro")
            saldo -= monto;
    }
    archivo.close();

    cout << "Saldo final: $" << saldo << endl;
}

int main() {
    registrarTransacciones();
    calcularSaldo();
    return 0;
}
