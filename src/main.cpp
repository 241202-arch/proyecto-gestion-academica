#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Estudiante {
    int codigo;
    string nombre;
};

int main() {

    vector<Estudiante> estudiantes = {
        {1, "David"},
        {2, "Juan"},
        {3, "Maria"}
    };

    cout << "SISTEMA DE GESTION ACADEMICA" << endl;
    cout << "Lista de estudiantes:" << endl;

    for (const auto& estudiante : estudiantes) {
        cout << estudiante.codigo << " - "
             << estudiante.nombre << endl;
    }

    return 0;
}