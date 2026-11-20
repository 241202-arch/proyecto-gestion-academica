#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Curso {
    int codigo;
    string nombre;
};

int main() {

    vector<Curso> cursos = {
        {101, "Programacion"},
        {102, "Base de Datos"},
        {103, "Ingenieria de Software"}
    };

    cout << "LISTA DE CURSOS" << endl;

    for (const auto& curso : cursos) {
        cout << curso.codigo << " - "
             << curso.nombre << endl;
    }

    return 0;
}