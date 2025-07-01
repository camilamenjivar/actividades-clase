#include <iostream>
#include <string>
using namespace std;

struct Atleta {
    string nombre;
    string pais;
    float tiempo; // en segundos
};

Atleta atletaMasRapido(Atleta atletas[], int n) {
    Atleta rapido = atletas[0];
    for (int i = 1; i < n; i++) {
        if (atletas[i].tiempo < rapido.tiempo)
            rapido = atletas[i];
    }
    return rapido;
}

void registrarAtletas(Atleta atletas[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Atleta #" << i+1 << endl;
        cout << "Nombre: ";
        cin >> atletas[i].nombre;
        cout << "País: ";
        cin >> atletas[i].pais;
        cout << "Tiempo en segundos: ";
        cin >> atletas[i].tiempo;
    }
}

int main() {
    int n;
    cout << "Cuantos atletas desea registrar? ";
    cin >> n;
    Atleta atletas[n];
    registrarAtletas(atletas, n);
    Atleta ganador = atletaMasRapido(atletas, n);
    cout << "El atleta con menor tiempo es: " << ganador.nombre << " de " << ganador.pais << " con " << ganador.tiempo << " segundos." << endl;
    return 0;
}
