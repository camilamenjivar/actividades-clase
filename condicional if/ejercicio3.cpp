#include <iostream>
using namespace std;
int main(){
    int num1; int num2;
    cout << "Ingrese el primer numero: " <<endl;
    cin >> num1;

    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;

     if (num1 > num2) {
        cout << "El primer numero (" << num1 << ") es mayor que el segundo (" << num2 << ")." << endl;
    } else if (num1 < num2) {
        cout << "El segundo numero (" << num2 << ") es mayor que el primero (" << num1 << ")." << endl;
    } else {
        cout << "Ambos numeros son iguales" << endl;
    }
    return 0;
}