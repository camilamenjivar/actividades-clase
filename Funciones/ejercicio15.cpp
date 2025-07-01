#include <iostream>
using namespace std;

float raizCuadrada(float n) {
    float x = n;
    float error = 0.0001;

    while ((x * x - n) > error || (x * x - n) < -error) {
        x = (x + n / x) / 2;
    }

    return x;
}

int main() {
    float numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "Raiz cuadrada aproximada: " << raizCuadrada(numero) << endl;

    return 0;
}
