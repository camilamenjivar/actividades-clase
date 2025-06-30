#include <iostream>
using namespace std;

int main() {
    int consumo;

    cout << "Ingresa el consumo en kWh: ";
    cin >> consumo;

    if (consumo < 100) {
        cout << "Tarifa baja" << endl;
    }
    else if (consumo >= 100 && consumo <= 200) {
        cout << "Tarifa media" << endl;
    }
    else {
        cout << "Tarifa alta" << endl;
    }

    return 0;
}
