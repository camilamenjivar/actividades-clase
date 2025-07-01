#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, temp;
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        temp = a + b;
        a = b;
        b = temp;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Cantidad de terminos Fibonacci: ";
    cin >> n;
    fibonacci(n);
    return 0;
}
