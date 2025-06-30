#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingresa el número N: ";
    cin >> N;

    
    for (int i = 1; i <= N; i++) {
       
        if (i % 2 == 0) {
            cout << -i;
        } else {
            cout << i;
        }
        if (i < N) {
            cout << ", ";
        }
    }

    cout << endl;

    return 0;
}