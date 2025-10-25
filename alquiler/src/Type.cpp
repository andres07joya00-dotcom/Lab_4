#include "Type.h"
#include <iostream>
using namespace std;

Auto::Auto(string m, string mo, string p, int c)
    : Vehiculo(m, mo, p), capacidadPasajeros(c) {}

void Auto::mostrarInformacion() const {
    cout << "[AUTO] ";
    Vehiculo::mostrarInformacion();
    cout << "Capacidad de pasajeros: " << capacidadPasajeros << endl;
}

Bicicleta::Bicicleta(string m, string mo, string p, bool c)
    : Vehiculo(m, mo, p), tieneCanasta(c) {}

void Bicicleta::mostrarInformacion() const {
    cout << "[BICICLETA] ";
    Vehiculo::mostrarInformacion();
    cout << "Tiene canasta: " << (tieneCanasta ? "Sí" : "No") << endl;
}