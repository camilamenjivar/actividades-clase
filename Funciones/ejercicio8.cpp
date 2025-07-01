#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    if (esPrimo(n)) cout << "Es primo." << endl;
    else cout << "No es primo." << endl;
    return 0;
}
