#include <iostream>
using namespace std;

int main() {
    int base, exponente;
    int resultado = 1;

    cout << "Ingresa la base: ";
    cin >> base;

    cout << "Ingresa el exponente: ";
    cin >> exponente;

    for (int i = 1; i <= exponente; i++) {
        resultado = resultado * base;
    }

    cout << base << " elevado a la " << exponente << " es: " << resultado << endl;

    return 0;
}
