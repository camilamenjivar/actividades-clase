#include <iostream>
using namespace std;

int main() {
    int N;
    float numero, suma = 0;

// se pide cuantos numeros va a ingresar el usuario
    cout << "¿Cuantos numeros vas a ingresar? ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << "Ingresa el numero " << i << ": ";
        cin >> numero;
        suma = suma + numero;
    }

    float promedio = suma / N;

    cout << "El promedio de los " << N << " numeros es: " << promedio << endl;

    return 0;
}
