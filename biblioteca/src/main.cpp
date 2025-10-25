#include "Biblioteca.h"
#include "Libro.h"
#include <iostream>

using namespace std;

int main() {
    Biblioteca b1;
    b1.cargarLibrosPorDefecto(); 

    int opcion;

    do {
        cout << "\n BIBLIOTECA ECI PA ";
        cout << "1. Agregar libro\n";
        cout << "2. Eliminar libro\n";
        cout << "3. Mostrar libros disponibles\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cin.ignore(); // limpiar buffer

        if (opcion == 1) {
            string titulo, autor, isbn;
            char disponibleChar;
            bool disponible;

            cout << "\nIngrese el titulo del libro: ";
            getline(cin, titulo);
            cout << "Ingrese el autor del libro: ";
            getline(cin, autor);
            cout << "Ingrese el ISBN/SN: ";
            getline(cin, isbn);
            cout << "¿Está disponible? (s/n): ";
            cin >> disponibleChar;
            disponible = (disponibleChar == 's' || disponibleChar == 'S');

            Libro nuevo(titulo, autor, isbn, disponible);
            b1.agregarLibro(nuevo);

        } else if (opcion == 2) {
            string titulo;
            cout << "\nIngrese el tatulo del libro a eliminar: ";
            getline(cin, titulo);
            b1.eliminarLibro(titulo);

        } else if (opcion == 3) {
            b1.mostrarDisponibles();

        } else if (opcion == 4) {
            cout << "\nSALIR\n";
        } else {
            cout << "Opcion invalida, intente nuevamente.\n";
        }

    } while (opcion != 4);

    return 0;
}
