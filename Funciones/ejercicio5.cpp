#include <iostream>
using namespace std;

float celsiusAFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

int main() {
    float c;
    cout << "Ingrese grados Celsius: ";
    cin >> c;
    cout << "En Fahrenheit: " << celsiusAFahrenheit(c) << endl;
    return 0;
}
