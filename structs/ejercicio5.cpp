#include <iostream>
#include <string>
using namespace std;

struct Empleado {
    string nombre;
    float salarioBase;
    int horasExtra;
};

int main() {
    Empleado emp;

    cout << "Ingrese el nombre del empleado: ";
    getline(cin, emp.nombre);

    cout << "Ingrese el salario base: ";
    cin >> emp.salarioBase;

    cout << "Ingrese las horas extra trabajadas: ";
    cin >> emp.horasExtra;

    // Calculo del salario total
    // Cada hora extra suma un 10% del salario base
    float pagoHorasExtra = emp.horasExtra * (emp.salarioBase * 0.10);
    float salarioTotal = emp.salarioBase + pagoHorasExtra;

    cout << "\nEmpleado: " << emp.nombre << endl;
    cout << "Salario base: $" << emp.salarioBase << endl;
    cout << "Horas extra: " << emp.horasExtra << endl;
    cout << "Salario total: $" << salarioTotal << endl;

    return 0;
}