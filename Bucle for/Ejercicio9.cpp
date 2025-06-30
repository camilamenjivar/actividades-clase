//Números Divisibles por 3 y 5
//Muestra todos los números del 1 al 100 que sean divisibles por 3 y por 5.
#include <iostream>
using namespace std;

int main() {
    cout << "numeros entre el rango de 1 al 200 divisibles entre 3 y 5:" << endl;

    for (int i = 1; i <= 200; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}

