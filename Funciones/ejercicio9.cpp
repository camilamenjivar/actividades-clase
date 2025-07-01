#include <iostream>
using namespace std;

float promedio(int arr[], int tam) {
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += arr[i];
    }
    return (float)suma / tam;
}

int main() {
    int n;
    cout << "¿Cuántos números? ";
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> nums[i];
    }
    cout << "El promedio es: " << promedio(nums, n) << endl;
    return 0;
}
