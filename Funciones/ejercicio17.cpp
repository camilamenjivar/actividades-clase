#include <iostream>
#include <string>
using namespace std;

string decimalABinario(int n) {
    string binario = "";
    if (n == 0) return "0";
    while (n > 0) {
        binario = to_string(n % 2) + binario;
        n /= 2;
    }
    return binario;
}

int main() {
    int numero;
    cout << "Ingrese un numero decimal: ";
    cin >> numero;

    cout << "Binario: " << decimalABinario(numero) << endl;

    return 0;
}
