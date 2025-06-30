#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Ingrese un numero del 1 al 7: " ;
    cin >> num;
    if (num >= 1 && num <=5){
        cout << "Dia laboral" <<endl;
    } else {
        cout << "Fin de semana" <<endl;
    }
    return 0;
}