#include <iostream>
using namespace std;

int main() {
    int dia;

    // Pedir al usuario el día de la semana
    cout << "Ingrese el día de la semana (1 = Lunes, ..., 7 = Domingo): ";
    cin >> dia;

    // Mostrar el horario de clases según el día usando switch
    switch (dia) {
        case 1: // 
            cout << "Horario de clases para Lunes:\n";
            cout << "8:00 - 9:00 Matemáticas\n";
            cout << "9:15 - 10:15 Física\n";
            cout << "10:30 - 12:30 Literatura\n";
            break;

        case 2: 
            cout << "Horario de clases para Martes:\n";
            cout << "8:00 - 9:00 Química\n";
            cout << "9:15 - 10:15 Historia\n";
            cout << "10:30 - 1:30 Educación Física\n";
            break;

        case 3: 
            cout << "Horario de clases para Miércoles:\n";
            cout << "8:00 - 9:00 Biología\n";
            cout << "9:15 - 10:15 Matemáticas\n";
            cout << "11:30 - 2:30 Inglés\n";
            break;

        case 4: 
            cout << "Horario de clases para Jueves:\n";
            cout << "8:00 - 9:00 Física\n";
            cout << "9:15 - 10:15 Arte\n";
            cout << "10:30 - 11:00 Literatura\n";
            break;

        case 5: 
            cout << "Horario de clases para Viernes:\n";
            cout << "8:00 - 9:00 Química\n";
            cout << "9:15 - 10:15 Historia\n";
            cout << "12:30 - 2:00 Música\n";
            break;

        case 6: 
            cout << "Sábado: No hay clases.\n";
            break;

        case 7: 
            cout << "Domingo: Día de descanso.\n";
            break;

        default:
            cout << "Día inválido. Por favor ingrese un número del 1 al 7.\n";
            break;
    }

    return 0;
}