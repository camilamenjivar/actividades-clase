#include <iostream>
using namespace std;

int main() {
    int mes;

    // Pedir mes de nacimiento al usuario
    cout << "Ingrese el mes de nacimiento (1-12): ";
    cin >> mes;

    // Mostrar signo zodiacal según el mes 
    switch (mes) {
        case 1:
            cout << "Enero: Capricornio (22 dic - 19 ene) o Acuario (20 ene - 18 feb)" << endl;
            break;
        case 2:
            cout << "Febrero: Acuario (20 ene - 18 feb) o Piscis (19 feb - 20 mar)" << endl;
            break;
        case 3:
            cout << "Marzo: Piscis (19 feb - 20 mar) o Aries (21 mar - 19 abr)" << endl;
            break;
        case 4:
            cout << "Abril: Aries (21 mar - 19 abr) o Tauro (20 abr - 20 may)" << endl;
            break;
        case 5:
            cout << "Mayo: Tauro (20 abr - 20 may) o Géminis (21 may - 20 jun)" << endl;
            break;
        case 6:
            cout << "Junio: Géminis (21 may - 20 jun) o Cáncer (21 jun - 22 jul)" << endl;
            break;
        case 7:
            cout << "Julio: Cáncer (21 jun - 22 jul) o Leo (23 jul - 22 ago)" << endl;
            break;
        case 8:
            cout << "Agosto: Leo (23 jul - 22 ago) o Virgo (23 ago - 22 sep)" << endl;
            break;
        case 9:
            cout << "Septiembre: Virgo (23 ago - 22 sep) o Libra (23 sep - 22 oct)" << endl;
            break;
        case 10:
            cout << "Octubre: Libra (23 sep - 22 oct) o Escorpio (23 oct - 21 nov)" << endl;
            break;
        case 11:
            cout << "Noviembre: Escorpio (23 oct - 21 nov) o Sagitario (22 nov - 21 dic)" << endl;
            break;
        case 12:
            cout << "Diciembre: Sagitario (22 nov - 21 dic) o Capricornio (22 dic - 19 ene)" << endl;
            break;
        default:
            cout << "Mes inválido. Por favor ingrese un número entre 1 y 12." << endl;
            break;
    }

    return 0;
}