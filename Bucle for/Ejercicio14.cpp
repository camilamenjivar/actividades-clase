#include <iostream>
using namespace std;

int main() {
    int numero, inverso = 0;

    cout << "Ingresa un numero: ";
    cin >> numero;

    int signo = 1;
    if (numero < 0) {
        signo = -1;
        numero = -numero;
    }

    for (; numero > 0; numero = numero / 10) {
        int digito = numero % 10;           // Último dígito
        inverso = inverso * 10 + digito;    // Agrega ese dígito al resultado
    }

    
    inverso = inverso * signo;

    cout << "El numero invertido es: " << inverso << endl;

    return 0;
}
