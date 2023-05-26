#include <iostream>

using namespace std;

// Clase base "Animal"
class Animal {
public:
    // Método virtual "hacerSonido()"
    virtual void hacerSonido() {
        cout << "Haciendo sonido genérico de animal" << endl;
    }
};

// Clase derivada "Perro"
class Perro : public Animal {
public:
    // Redefinición del método "hacerSonido()"
    void hacerSonido()  {
        cout << "El perro hace: Guau!" << endl;
    }
};

// Clase derivada "Gato"
class Gato : public Animal {
public:
    // Redefinición del método "hacerSonido()"
    void hacerSonido()  {
        cout << "El gato hace: Miau!" << endl;
    }
};

// Clase derivada "Vaca"
class Vaca : public Animal {
public:
    // Redefinición del método "hacerSonido()"
    void hacerSonido()  {
        cout << "La vaca hace: Muu!" << endl;
    }
};

int main() {
    // Crear instancias de diferentes animales
    Animal* perro = new Perro();
    Animal* gato = new Gato();
    Animal* vaca = new Vaca();
    
    // Llamar al método "hacerSonido()" de cada animal
    perro->hacerSonido();
    gato->hacerSonido();
    vaca->hacerSonido();
    
    // Liberar memoria
    delete perro;
    delete gato;
    delete vaca;
    
    return 0;
}