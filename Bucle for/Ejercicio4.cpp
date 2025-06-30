#include <iostream>
using namespace std;

int main() {
    int num;

    //se pide un numero para mostrar su respectiva tabla
    cout << "Ingrese un numero para mostrar la tabla: ";
    cin >> num;

    // para mostrar la tabla
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}