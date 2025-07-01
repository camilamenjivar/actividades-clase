#include <iostream>
using namespace std;

int factorial(int n) {
    int f = 1;
    while (n > 1) {
        f *= n;
        n--;
    }
    return f;
}

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "El factorial es: " << factorial(n) << endl;

    return 0;
}
