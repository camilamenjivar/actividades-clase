#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int num1, num2;

    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    int distancia1 = abs(100 - num1);
    int distancia2 = abs(100 - num2);

    if (distancia1 < distancia2) {
        cout << num1 << " está más cerca de 100." << endl;
    } else if (distancia2 < distancia1) {
        cout << num2 << " está más cerca de 100." << endl;
    } else {
        cout << "Ambos numeros están a la misma distancia de 100." << endl;
    }

    return 0;
}