//Suma de los Primeros N Números
//Solicita un número N al usuario y calcula la suma de los primeros N números naturales

#include <iostream> 
using namespace std;

int main(){
    int n, suma = 0;

    cout << "Ingrese un numero n" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++){
        suma += i; 
    }

    cout << "El resultado de la suma de los primeros " << n << " numeros naturales es: " << suma << endl;

    return 0;
}
