#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include <iostream>
using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    string isbn;
    bool disponible;

public:
    Libro(string t, string a, string i, bool d);
    void mostrar() const;
    string getTitulo() const;
    bool estaDisponible() const;
};

#endif
