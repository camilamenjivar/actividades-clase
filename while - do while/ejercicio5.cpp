#include <iostream>
using namespace std;

int main() {
    int N, i = 1, suma = 0;

    // Pedir al usuario el valor de N
    cout << "Ingresa un número entero positivo N: ";
    cin >> N;

    // Ciclo para sumar los números pares desde 1 hasta N
    while (i <= N) {
        if (i % 2 == 0) {      
            suma += i;         
        }
        i++;                   
    }

    // Mostrar el resultado
    cout << "La suma de los números pares desde 1 hasta " << N << " es: " << suma << endl;

    return 0;
}