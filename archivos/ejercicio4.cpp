#include <iostream>
#include <fstream>
using namespace std;

void guardarNumeros() {
    ofstream archivo("numeros.txt");
    if (!archivo) {
        cout << "No se pudo abrir numeros.txt\n";
        return;
    }

    int n, num;
    cout << "¿Cuántos números quieres ingresar? ";
    cin >> n;
    cout << "Escribe los números:\n";
    for (int i = 0; i < n; i++) {
        cin >> num;
        archivo << num << endl;
    }
    archivo.close();
    cout << "Números guardados en numeros.txt\n";
}

int main() {
    guardarNumeros();
    return 0;
}
