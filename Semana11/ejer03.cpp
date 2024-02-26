#include <iostream>
#include <string>
using namespace std;
class persona
{
private:
    string name;
    int edad

public:
    persona(string n, int e) : name(n), edad(e) {}
    void consultar();
};
void persona::consultar()
{
    cout << "Nombre: " << this->name << endl;
    cout << "Edad: " << this->edad << endl;
}

class docente : public persona
{
private:
    string cargo;
    int horas;


public:
    docente(string n, int e, string c, int h) : persona(n, e), cargo(c), horas(h) {}
    void consultar();
};
void docente::consultar()
{
    persona::consultar();
    cout << "Cargo: " << cargo << endl;
    cout << "Horas: " << horas << endl;
}
int main()
{
    docente p1("Juan", 30, "Profesor", 40);
    p1.consultar();
    return 0;
}