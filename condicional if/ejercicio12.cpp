#include <iostream>
using namespace std;

int main() {
    float lado1, lado2, lado3;
    cout << "Ingresa el lado 1: ";
    cin >> lado1;
    cout << "Ingresa el lado 2: ";
    cin >> lado2;
    cout << "Ingresa el lado 3: ";
    cin >> lado3;


    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
       
        if (lado1 == lado2 && lado2 == lado3) {
            cout << "El triángulo es equilátero." << endl;
        } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
            cout << "El triángulo es isósceles." << endl;
        } else {
            cout << "El triángulo es escaleno." << endl;
        }
    } else {
        cout << "Los lados ingresados no forman un triángulo válido." << endl;
    }

    return 0;
}