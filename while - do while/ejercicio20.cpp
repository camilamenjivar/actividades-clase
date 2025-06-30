#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    int N;
    cout << "Ingrese cuántos números aleatorios desea generar (máximo 100): ";
    cin >> N;

    if (N < 1 || N > 100) {
        cout << "Número inválido. Debe estar entre 1 y 100.\n";
        return 1;
    }

    bool usados[101] = {false};  
    int contador = 0;

    srand(time(NULL));  

    cout << "Números aleatorios sin repetición:\n";
    while (contador < N) {
        int num = rand() % 100 + 1;  // número entre 1 y 100
        if (!usados[num]) {
            usados[num] = true;
            cout << num << " ";
            contador++;
        }
    }

    cout << endl;
    return 0;
}