
#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string name;
    int edad;
    string tipodeanimal;
    int npatas;

public:
    Animal(const string& n, int y, const string& k, int f) : name(n), edad(y), tipodeanimal(k), npatas(f) {
    }
    virtual void mostrar();
};

class Mamifero : public Animal {
private:
    int hijos;
    bool pelaje;

public:
    Mamifero(const string& name, int edad, const string& tipodeanimal, int npatas, int hijos, bool pelaje)
        : Animal(name, edad, tipodeanimal, npatas), hijos(hijos), pelaje(pelaje) {
    }
    void mostrar() override;
};

void Animal::mostrar() {
    cout<<"Name "<<name<<endl;
    cout<<"Age "<<edad<<endl;
    cout<<"Type of Animal "<<tipodeanimal<<endl;
    cout<<"Number of paws "<<npatas<<endl;
}

void Mamifero::mostrar(){
    Animal::mostrar(); 
    cout<<"Number of children "<<hijos<<endl;
    cout<<"Tiene Pelaje "<<(pelaje ? "true" : "false")<<endl;
}

int main() {
    Mamifero m("Perro", 5, "Mamifero", 4, 3, true);
    m.mostrar();
    return 0;
}
