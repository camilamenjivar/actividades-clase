#include <iostream>
using namespace std;

int main() {
    int a, b;


    cout << "Ingresa el primer número: ";
    cin >> a;

    cout << "Ingresa el segundo número: ";
    cin >> b;

    
    int originalA = a;
    int originalB = b;

    
    while (b != 0) {
        int residuo = a % b; 
        a = b;               
        b = residuo;         
    }

    
    cout << "El MCD de " << originalA << " y " << originalB << " es: " << a << endl;

    return 0;
}