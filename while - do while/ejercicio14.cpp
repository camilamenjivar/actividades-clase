#include <iostream>
using namespace std;

int main() {
    int decimal;

    // Solicitar número decimal al usuario
    cout << "Ingresa un número decimal: ";
    cin >> decimal;

    // Caso especial si el número es 0
    if (decimal == 0) {
        cout << "Binario: 0" << endl;
        return 0;
    }

    string binario = ""; // Cadena donde se guardará el binario

    // Convertimos a binario usando divisiones sucesivas por 2
    while (decimal > 0) {
        int residuo = decimal % 2;            
        binario = char(residuo + '0') + binario; 
        decimal = decimal / 2;                
    }

    // Mostramos el resultado
    cout << "Binario: " << binario << endl;

    return 0;
}