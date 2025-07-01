#include <iostream>
#include <string>
using namespace std;

struct CuentaBancaria {
    string numCuenta;
    string titular;
    float saldo;
};

void depositar(CuentaBancaria &c, float monto) {
    c.saldo += monto;
}

bool retirar(CuentaBancaria &c, float monto) {
    if (monto <= c.saldo) {
        c.saldo -= monto;
        return true;
    }
    return false;
}

void mostrarCuenta(const CuentaBancaria &c) {
    cout << "Cuenta: " << c.numCuenta << ", Titular: " << c.titular << ", Saldo: $" << c.saldo << endl;
}

int main() {
    CuentaBancaria cuenta;
    cout << "Número de cuenta: ";
    cin >> cuenta.numCuenta;
    cout << "Nombre del titular: ";
    cin >> cuenta.titular;
    cuenta.saldo = 0;

    depositar(cuenta, 1000);
    if (retirar(cuenta, 500))
        cout << "Retiro exitoso.\n";
    else
        cout << "Saldo insuficiente.\n";

    mostrarCuenta(cuenta);

    return 0;
}
