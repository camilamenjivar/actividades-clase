#include <iostream>

using namespace std;

int main() {
    int peso;

    cout << "Ingresa el peso del paquete a enviar: ";
    cin >> peso;


    if (peso <= 5) {
        cout << "El cobro sera de 5 dolares" << endl;
    } 
   
    else if (peso >= 6 && peso <= 10) {
        cout << "El cobro sera de 10 dolares" << endl;
    }
    
    else {
        cout << "El cobro sera de 15 dolares" << endl;
    }

    return 0;
}
