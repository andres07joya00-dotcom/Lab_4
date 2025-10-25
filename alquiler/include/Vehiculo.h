#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
#include <iostream>
using namespace std;

class Vehiculo {
protected:
    string marca;
    string modelo;
    string placa;
    bool disponible;

public:
    Vehiculo(string m, string mo, string p);
    virtual ~Vehiculo() = default;

    virtual void mostrarInformacion() const;
    bool estaDisponible() const;
    void alquilar();
    void devolver();
};

#endif