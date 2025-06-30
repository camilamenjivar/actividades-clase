#include <iostream>
using namespace std;
int main (){
    int monto; int total;
    cout << "Ingresa el monto de su compra por favor: " <<endl;
    cin >> monto;
    if (monto > 100){
        total = monto * 0.90;
        cout << "Se le aplica el 10% de descuento " <<endl;
    } else {
        total = monto;
        cout << "No se le aplico el descuento " <<endl;
    }

    cout << " $ Total a pagar: " << total << endl;

    return 0;
}