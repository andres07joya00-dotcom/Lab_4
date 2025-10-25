#ifndef SISTEMAALQUILER_H
#define SISTEMAALQUILER_H

#include <vector>
#include "Vehiculo.h"

class SistemaAlquiler {
private:
    std::vector<Vehiculo*> vehiculos;

public:
    ~SistemaAlquiler();
    void registrarVehiculo(Vehiculo* v);
    void mostrarVehiculosDisponibles() const;
    void alquilarVehiculo(int index);
    void devolverVehiculo(int index);
};

#endif