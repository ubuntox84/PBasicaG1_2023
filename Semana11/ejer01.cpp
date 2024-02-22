#include <iostream>
#include <string>
using namespace std;
class animal
{
private:
    string nombre;

public:
    animal(string x) : nombre(x){};
    void comer() { cout << " Esta comiendo " << endl; }
    void dormir() { cout << " esta durmiendo " << endl; }
    void correr() { cout << " esta corriendo " << endl; }
    void setNombre(string x)
    {
        nombre = x;
    }
    string getNombre()
    {
        return nombre;
    }
};
class perro : public animal
{
private:
    int numpatas;
    bool tiene_Pelaje;

public:
    perro(string x, int p, bool t) : animal(x), numpatas(p), tiene_Pelaje(t) {}
    void amamantar()
    {
        cout << animal::getNombre() << " esta amamantando" << endl;
    }
    void ladrar()
    {
        cout << animal::getNombre() << "esta ladrando" << endl;
    }
    void informacion()
    {
        cout << "Nombre: " << animal::getNombre() << endl;
        cout << "# de patas: " << numpatas << endl;
        cout << "Tiene pelaje: " << tiene_Pelaje << endl;
    }
};
int main()
{
    perro p1("Firulais", 4, true);
    p1.informacion();
}
