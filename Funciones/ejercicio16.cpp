#include <iostream>
#include <string>
using namespace std;

string invertirCadena(string texto) {
    string invertida = "";
    for (int i = texto.length() - 1; i >= 0; i--) {
        invertida += texto[i];
    }
    return invertida;
}

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    cin >> cadena;

    cout << "Cadena invertida: " << invertirCadena(cadena) << endl;

    return 0;
}
