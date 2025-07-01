#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

void ordenarNumeros() {
    ifstream archivo("numeros.txt");
    if (!archivo) {
        cout << "No se pudo abrir numeros.txt\n";
        return;
    }

    vector<int> nums;
    int num;
    while (archivo >> num) {
        nums.push_back(num);
    }
    archivo.close();

    sort(nums.begin(), nums.end());

    ofstream ordenado("ordenados.txt");
    if (!ordenado) {
        cout << "No se pudo crear ordenados.txt\n";
        return;
    }

    for (int n : nums) {
        ordenado << n << endl;
    }

    ordenado.close();
    cout << "Numeros ordenados guardados en ordenados.txt\n";
}

int main() {
    ordenarNumeros();
    return 0;
}
