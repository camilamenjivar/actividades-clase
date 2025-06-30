#include <iostream>
using namespace std;

int main() {
    int N;
    double pi = 0.0;

    cout << "¿Cuantos terminos quieres usar para aproximar pi? ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        double termino = 4.0 * ( (i % 2 == 0 ? 1 : -1) ) / (2 * i + 1);
        pi = pi + termino;
    }

    cout << "Aproximacion de pi con " << N << " terminos: " << pi << endl;

    return 0;
}
