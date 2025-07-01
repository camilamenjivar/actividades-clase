#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    float calificaciones[5];
};

float calcularPromedio(float calif[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++)
        suma += calif[i];
    return suma / n;
}

void registrarEstudiante(Estudiante &e) {
    cout << "Nombre del estudiante: ";
    cin >> e.nombre;
    cout << "Ingrese 5 calificaciones:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Calificacion " << i+1 << ": ";
        cin >> e.calificaciones[i];
    }
}

int main() {
    Estudiante est;
    registrarEstudiante(est);
    cout << "Promedio: " << calcularPromedio(est.calificaciones, 5) << endl;
    return 0;
}
