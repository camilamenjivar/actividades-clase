#include <iostream>
using namespace std;

float areaCirculo(float radio) {
    return 3.1416 * radio * radio;
}

int main() {
    float r;
    cout << "Ingrese el radio: ";
    cin >> r;
    cout << "Area del circulo: " << areaCirculo(r) << endl;
    return 0;
}
