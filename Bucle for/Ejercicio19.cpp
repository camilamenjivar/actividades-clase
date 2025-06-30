//Triángulo de Asteriscos
//Imprime un triángulo de altura N usando *
#include <iostream>
using namespace std;

int main() {
    int N;

    // Pedimos la altura del triángulo
    cout << "Ingresa la altura del triángulo: ";
    cin >> N;

    
    for (int i = 1; i <= N; i++) {
        // Imprimimos i asteriscos en la fila 
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;  
    }

    return 0;
}