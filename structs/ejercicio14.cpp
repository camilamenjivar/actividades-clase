#include <iostream>
#include <string>
using namespace std;

struct Alumno {
    string nombre;
    string carrera;
    float calificaciones[3];
};

float calcularPromedio(float calif[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++)
        suma += calif[i];
    return suma / n;
}

void registrarAlumno(Alumno &a) {
    cout << "Nombre del alumno: ";
    cin >> a.nombre;
    cout << "Carrera: ";
    cin >> a.carrera;
    cout << "Ingrese 3 calificaciones:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Calificacion " << i+1 << ": ";
        cin >> a.calificaciones[i];
    }
}

int main() {
    Alumno a;
    registrarAlumno(a);
    cout << "Promedio: " << calcularPromedio(a.calificaciones, 3) << endl;
    return 0;
}
