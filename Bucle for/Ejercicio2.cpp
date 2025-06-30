//Números Pares del 1 al 50
//Muestra en pantalla los números pares del 1 al 50.

#include <iostream> 
using namespace std;

int main(){
    //incluir los numeros del 1 al 50
    for(int i= 1; i<= 50; i++){
        //para poder mostrar los numeros pares
        if (i % 2 == 0){
            cout << i << endl;
        }
    }
    return 0;
}