//Serie de Fibonacci
//Muestra los primeros N términos de la serie de Fibonacci.
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "¿Cuantos terminos de la serie de Fibonacci deseas ver? ";
    cin >> N;

    int a = 0, b = 1, siguiente;

    cout << "Serie de Fibonacci: ";

    for (int i = 1; i <= N; i++) {
        cout << a << " ";
        siguiente = a + b;
        a = b;
        b = siguiente;
    }

    cout << endl;
    return 0;
}
