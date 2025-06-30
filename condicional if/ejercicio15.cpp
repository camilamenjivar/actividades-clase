#include <iostream>
using namespace std;

int main() {
    int velocidad;

    cout << "Ingresa la velocidad del conductor (km/h): ";
    cin >> velocidad;

    if (velocidad > 80) {
        cout << "Multa mayor: Excediste los 80 km/h" << endl;
    }
    else if (velocidad > 60) {
        cout << "Multa: Superaste los 60 km/h" << endl;
    }
    else {
        cout << "Todo bien, no hay multa." << endl;
    }

    return 0;
}
