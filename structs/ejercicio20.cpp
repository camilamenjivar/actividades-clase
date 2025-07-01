#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    float calificaciones[5];
};

float promedio(float calif[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++)
        suma += calif[i];
    return suma / n;
}

bool aprobo(float calif[], int n) {
    return promedio(calif, n) >= 6.0;
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
    cout << "Promedio: " << promedio(est.calificaciones, 5) << endl;
    if (aprobo(est.calificaciones, 5))
        cout << "El estudiante aprobo." << endl;
    else
        cout << "El estudiante reprobo." << endl;
    return 0;
}
