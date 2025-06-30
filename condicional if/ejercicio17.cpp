#include <iostream>
using namespace std;

int main() {
    int edad;
    int precio;

    cout << "Ingresa la edad del visitante: ";
    cin >> edad;

    if (edad < 5) {
        precio = 0;  
    } else if (edad >= 5 && edad <= 12) {
        precio = 5;  
    } else {
        precio = 10; 
    }

    
    cout << "El precio de entrada es: $" << precio << endl;

    return 0;
}