#include <iostream>

using namespace std;

// Clase base "Vehículo"
class Vehiculo {
public:
    // Método "acelerar()"
    void acelerar() {
        cout << "Acelerando el vehículo" << endl;
    }
};

// Clase derivada "Coche"
class Coche : public Vehiculo {
public:
    // Redefinición del método "acelerar()"
    void acelerar() {
        cout << "Acelerando el coche" << endl;
    }
    
    // Nuevo método "encenderLuces()"
    void encenderLuces() {
        cout << "Luces del coche encendidas" << endl;
    }
};

// Clase derivada "Motocicleta"
class Motocicleta : public Vehiculo {
public:
    // Redefinición del método "acelerar()"
    void acelerar() {
        cout << "Acelerando la motocicleta" << endl;
    }
};

int main() {
    // Crear instancia de la clase "Coche" y llamar al método "acelerar()"
    Coche coche;
    coche.acelerar();
    
    // Crear instancia de la clase "Motocicleta" y llamar al método "acelerar()"
    Motocicleta motocicleta;
    motocicleta.acelerar();
    
    // Llamar al método "encenderLuces()" en una instancia de la clase "Coche"
    coche.encenderLuces();
    
    return 0;
}