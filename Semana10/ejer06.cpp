#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    string nombre;
public:
    Animal(string);
    virtual void mostrar();
};

class Mamifero : public Animal {
private:
    int patas;
    bool pelaje;
public:
    Mamifero(string, int, bool); 
    void mostrar();
};

Animal::Animal(string _nombre) {
    nombre = _nombre;
}

void Animal::mostrar() {
    cout << "Nombre: " << nombre << endl;
}

Mamifero::Mamifero(string _nombre, int _patas, bool _pelaje) : Animal(_nombre) {
    patas = _patas;
    pelaje = _pelaje;
}

void Mamifero::mostrar() {
    Animal::mostrar();
    cout << "Patas: " << patas << endl;
    cout << "Pelaje: " << (pelaje ? "Si" : "No") << endl;
}

int main() {
    Mamifero Leon("León", 4, true);
    Leon.mostrar();
    return 0;
}