#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Estudiante {
    int codigo;
    string nombre;
};

void buscarEstudiante(const vector<Estudiante>& estudiantes, int codigo) {

    bool encontrado = false;

    for (const auto& estudiante : estudiantes) {

        if (estudiante.codigo == codigo) {

            cout << "Estudiante encontrado: "
                 << estudiante.nombre << endl;

            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Estudiante no encontrado." << endl;
    }
}

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


    int codigo;

cout << endl;
cout << "Ingrese el codigo del estudiante a buscar: ";
cin >> codigo;

buscarEstudiante(estudiantes, codigo);

    return 0;
}