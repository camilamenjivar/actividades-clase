#include <iostream>
#include <fstream>
using namespace std;

void sumarNumeros() {
    ifstream archivo("numeros.txt");
    if (!archivo) {
        cout << "No se pudo abrir numeros.txt\n";
        return;
    }

    int suma = 0, num;
    while (archivo >> num) {
        suma += num;
    }

    archivo.close();
    cout << "La suma de los números es: " << suma << endl;
}

int main() {
    sumarNumeros();
    return 0;
}
