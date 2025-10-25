#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include <string>
#include "Libro.h"
using namespace std;

class Biblioteca {
private:
    vector<Libro> librero;

public:
    void agregarLibro(const Libro& libro);
    void eliminarLibro(const string& titulo);
    void mostrarDisponibles() const;
    void cargarLibrosPorDefecto(); 
};

#endif
