#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    // se pide el valor de n
    cout << "Ingresa un número n: ";
    cin >> n;

    
    for (int i = 1; i <= n; i++){
        // para poder ver si es numero par
        if (i % 2 == 0) {
            suma += i;  // suma i a la variable suma
        }
    }

    // mostrar el resultado
    cout << "La suma de los números pares desde 1 hasta " <<n<< " es: " << suma << endl;

    return 0;
}