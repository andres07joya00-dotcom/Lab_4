#ifndef TYPE_H
#define TYPE_H

#include "Vehiculo.h"

class Auto : public Vehiculo {
private:
    int capacidadPasajeros;

public:
    Auto(string m, string mo, string p, int c);
    void mostrarInformacion() const override;
};

class Bicicleta : public Vehiculo {
private:
    bool tieneCanasta;

public:
    Bicicleta(string m, string mo, string p, bool c);
    void mostrarInformacion() const override;
};

#endif