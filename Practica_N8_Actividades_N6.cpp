#include <iostream>

using namespace std;


// Clase completamente abstracta "Forma"
class Forma {
public:
    // Método virtual puro para calcular el perímetro
    virtual double calcularPerimetro() = 0;
};

// Clase derivada "Círculo"
class Circulo : public Forma {
private:
    double radio;

public:
    // Constructor
    Circulo(double r) : radio(r) {}

    // Implementación del cálculo del perímetro para un círculo
    double calcularPerimetro()  {
        return 2 * 3.14159 * radio;
    }
};

// Clase derivada "Rectángulo"
class Rectangulo : public Forma {
private:
    double longitud;
    double ancho;

public:
    // Constructor
    Rectangulo(double l, double w) : longitud(l), ancho(w) {}

    // Implementación del cálculo del perímetro para un rectángulo
    double calcularPerimetro()  {
        return 2 * (longitud + ancho);
    }
};

// Clase derivada "Triángulo"
class Triangulo : public Forma {
private:
    double lado1;
    double lado2;
    double lado3;

public:
    // Constructor
    Triangulo(double l1, double l2, double l3) : lado1(l1), lado2(l2), lado3(l3) {}

    // Implementación del cálculo del perímetro para un triángulo
    double calcularPerimetro()  {
        return lado1 + lado2 + lado3;
    }
};

int main() {
    int opcion;
    double radio, longitud, ancho, lado1, lado2, lado3;

     cout << "Seleccione una forma: \n";
     cout << "1. Círculo\n";
     cout << "2. Rectángulo\n";
     cout << "3. Triángulo\n";
     cout << "Opción: ";
     cin >> opcion;

    Forma* forma = nullptr;

    switch (opcion) {
        case 1:
             cout << "Ingrese el radio del círculo: ";
             cin >> radio;
            forma = new Circulo(radio);
            break;

        case 2:
             cout << "Ingrese la longitud y el ancho del rectángulo: ";
             cin >> longitud >> ancho;
            forma = new Rectangulo(longitud, ancho);
            break;

        case 3:
             cout << "Ingrese los tres lados del triángulo: ";
             cin >> lado1 >> lado2 >> lado3;
            forma = new Triangulo(lado1, lado2, lado3);
            break;

        default:
             cout << "Opción inválida.\n";
            return 0;
    }

    if (forma != nullptr) {
        double perimetro = forma->calcularPerimetro();
         cout << "El perímetro de la forma seleccionada es: " << perimetro <<  endl;
        delete forma;
    }

    return 0;
}