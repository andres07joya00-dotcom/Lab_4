#include "Vehiculo.h"

Vehiculo::Vehiculo(string m, string mo, string p)
    : marca(m), modelo(mo), placa(p), disponible(true) {}

void Vehiculo::mostrarInformacion() const {
    cout << "Marca: " << marca << ", Modelo: " << modelo
         << ", Placa: " << placa
         << ", Estado: " << (disponible ? "Disponible" : "Alquilado") << endl;
}

bool Vehiculo::estaDisponible() const {
    return disponible;
}

void Vehiculo::alquilar() {
    disponible = false;
}

void Vehiculo::devolver() {
    disponible = true;
}