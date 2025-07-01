#include <iostream>
using namespace std;

int mayor(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    else if (b >= c) return b;
    else return c;
}

int main() {
    int x, y, z;
    cout << "Ingrese tres numeros: ";
    cin >> x >> y >> z;
    cout << "El mayor es: " << mayor(x, y, z) << endl;
    return 0;
}
