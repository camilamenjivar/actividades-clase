#include <iostream>
using namespace std;

bool esPar(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    if (esPar(n)) cout << "Es par." << endl;
    else cout << "Es impar." << endl;
    
    return 0;
}
