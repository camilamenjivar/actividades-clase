#include <iostream>
using namespace std;

int main() {
    int ano;

    cout << "Ingresa un año: ";
    cin >> ano;

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        cout << ano << " es un año bisiesto." << endl;
    } else {
        cout << ano << " no es un año bisiesto." << endl;
    }

    return 0;
}