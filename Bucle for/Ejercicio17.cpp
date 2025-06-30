//Números Perfectos
//Muestra los primeros N números perfectos (Un número perfecto es aquel cuya suma de divisores propios es igual a sí mismo).
#include <iostream>
using namespace std;

int main() {
    int N;
    int encontrados = 0;

    cout << "Ingresa la cantidad de números perfectos a mostrar: ";
    cin >> N;

    for (int num = 1; encontrados < N; num++) {
        int suma = 0;

        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                suma += i;
            }
        }

    
        if (suma == num) {
            cout << num << endl;
            encontrados++;
        }
    }

    return 0;
}