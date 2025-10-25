#include "Libro.h"

Libro::Libro(string t, string a, string i, bool d)
    : titulo(t), autor(a), isbn(i), disponible(d) {}

void Libro::mostrar() const {
    cout << "Título: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "ISBN/SN: " << isbn << endl;
    cout << "Disponible: " << (disponible ? "Sí" : "No") << endl;
    cout << "---------------------------" << endl;
}

string Libro::getTitulo() const {
    return titulo;
}

bool Libro::estaDisponible() const {
    return disponible;
}
