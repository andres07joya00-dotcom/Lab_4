#include "SistemaAlquiler.h"
#include "Type.h"
#include <iostream>
using namespace std;

void mostrarMenu() {
    cout << "\n SISTEMA DE ALQUILER DE VEHÍCULOS ECI PA" << endl;
    cout << "1. Registrar vehículo" << endl;
    cout << "2. Mostrar vehículos disponibles" << endl;
    cout << "3. Alquilar vehículo" << endl;
    cout << "4. Devolver vehículo" << endl;
    cout << "5. Salir" << endl;
    cout << "Seleccione una opción: ";
}

int main() {
    SistemaAlquiler sistema;
    int opcion;

    sistema.registrarVehiculo(new Auto("Toyota", "Corolla", "ABC123", 5));
    sistema.registrarVehiculo(new Auto("Mazda", "CX5", "JKL789", 7));
    sistema.registrarVehiculo(new Bicicleta("GW", "Evora", "XYZ456", true));

    do {
        mostrarMenu();
        cin >> opcion;
        cout << endl;

        switch (opcion) {
            case 1: {
                int tipo;
                cout << "Seleccione tipo de vehículo:\n1. Auto\n2. Bicicleta\n> ";
                cin >> tipo;

                string marca, modelo, placa;
                cout << "Marca: ";
                cin >> marca;
                cout << "Modelo: ";
                cin >> modelo;
                cout << "Placa: ";
                cin >> placa;

                if (tipo == 1) {
                    int capacidad;
                    cout << "Capacidad de pasajeros: ";
                    cin >> capacidad;
                    sistema.registrarVehiculo(new Auto(marca, modelo, placa, capacidad));
                } else if (tipo == 2) {
                    char tieneCanasta;
                    cout << "¿Tiene canasta? (s/n): ";
                    cin >> tieneCanasta;
                    sistema.registrarVehiculo(new Bicicleta(marca, modelo, placa, (tieneCanasta == 's' || tieneCanasta == 'S')));
                } else {
                    cout << "Opción no válida.\n";
                }
                break;
            }

            case 2:
                sistema.mostrarVehiculosDisponibles();
                break;

            case 3: {
                int index;
                sistema.mostrarVehiculosDisponibles();
                cout << "\nIngrese el número del vehiculo a alquilar: ";
                cin >> index;
                sistema.alquilarVehiculo(index);
                break;
            }

            case 4: {
                int index;
                sistema.mostrarVehiculosDisponibles();
                cout << "\nIngrese el namero del vehiculo a devolver: ";
                cin >> index;
                sistema.devolverVehiculo(index);
                break;
            }

            case 5:
                cout << "GRACIAS\n";
                break;

            default:
                cout << "Opción invalida. Intente nuevamente.\n";
        }

    } while (opcion != 5);

    return 0;
}