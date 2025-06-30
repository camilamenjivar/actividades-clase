#include <iostream>
using namespace std;
int main (){
    int temperatura;
    cout << "Ingrese la temperatura en grados celsius: " << endl;
    cin >> temperatura;

    if (temperatura < 15){
        cout << "La tempertaura es fria" <<endl;
    } else if (temperatura >= 15 && temperatura < 25 ){
        cout << "La temperatura es templada" <<endl;
    } else {
        cout << "Temperatura caliente" <<endl;
    }
    return 0;
}