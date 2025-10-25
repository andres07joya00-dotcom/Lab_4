#include "SistemaAlquiler.h"
#include <iostream>
using namespace std;

SistemaAlquiler::~SistemaAlquiler() {
    for (auto v : vehiculos)
        delete v;
}

void SistemaAlquiler::registrarVehiculo(Vehiculo* v) {
    vehiculos.push_back(v);
}

void SistemaAlquiler::mostrarVehiculosDisponibles() const {
    cout << "\n--- Vehículos Disponibles ---" << endl;
    for (size_t i = 0; i < vehiculos.size(); ++i) {
        cout << i << ". ";
        vehiculos[i]->mostrarInformacion();
    }
}

void SistemaAlquiler::alquilarVehiculo(int index) {
    if (index >= 0 && index < (int)vehiculos.size()) {
        if (vehiculos[index]->estaDisponible()) {
            vehiculos[index]->alquilar();
            cout << "Vehículo alquilado con éxito." << endl;
        } else {
            cout << "El vehículo ya está alquilado." << endl;
        }
    } else {
        cout << "Índice inválido." << endl;
    }
}

void SistemaAlquiler::devolverVehiculo(int index) {
    if (index >= 0 && index < (int)vehiculos.size()) {
        if (!vehiculos[index]->estaDisponible()) {
            vehiculos[index]->devolver();
            cout << "Vehículo devuelto con éxito." << endl;
        } else {
            cout << "El vehículo ya estaba disponible." << endl;
        }
    } else {
        cout << "Índice inválido." << endl;
    }
}