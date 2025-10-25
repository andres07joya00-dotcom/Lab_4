#include "Biblioteca.h"
#include <iostream>

void Biblioteca::agregarLibro(const Libro& libro) {
    librero.push_back(libro);
    cout << "Libro agregado: " << libro.getTitulo() << endl;
}

void Biblioteca::eliminarLibro(const string& titulo) {
    for (size_t i = 0; i < librero.size(); i++) {
        if (librero[i].getTitulo() == titulo) {
            librero.erase(librero.begin() + i);
            cout << "Libro eliminado: " << titulo << endl;
            return;
        }
    }
    cout << "No se encontró el libro con el título: " << titulo <<  endl;
}

void Biblioteca::mostrarDisponibles() const {
    cout << "\nLibros disponibles:\n";
    bool hayDisponibles = false;

    for (const Libro& libro : librero) {
        if (libro.estaDisponible()) {
            libro.mostrar();
            hayDisponibles = true;
        }
    }

    if (!hayDisponibles) {
        cout << "No hay libros disponibles en este momento\n";
    }
}

// 👇 Nuevo método: libros por defecto
void Biblioteca::cargarLibrosPorDefecto() {
    librero.push_back(Libro("Cien años de soledad", "Gabriel Garcaa Márquez", "12345", true));
    librero.push_back(Libro("El olvido que seremos", "Hector Abad Faciolince", "54321", true));
    librero.push_back(Libro("Delirio", "Laura Restrepo", "246810", true));
}
