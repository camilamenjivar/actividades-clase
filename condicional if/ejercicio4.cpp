#include <iostream>
using namespace std;
int main(){
    int calificacion;
    cout << "Ingrese su calificacion: " <<endl;
    cin >> calificacion;
    if (calificacion > 60){
        cout << "Felicidades usted aprobo " << endl;
    } else {
        cout << "Usted a reprobado " << endl;
    }
    return 0;
}
