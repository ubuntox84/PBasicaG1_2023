#include <iostream>
using namespace std;

class perro{
    private:
        string nombre;
        int edad;
        string raza;
    public:
    perro(string n, int e, string r) {
        this->nombre = n;
        this->edad = e;
        this->raza = r;
    }
    string get_nombre(){
        return this->nombre;
    }
    string get_raza(){
        return this->raza;
    }
    int get_edad(){
        return this->edad;
    }
    void mostrarNombreRaza(){
        cout<<"Nombre: "<<this->nombre<<" Raza: "<<this->raza<<endl;
    }
    void setraza(string newraza){
        this->raza=newraza;
    }
    void informacion(){
        cout<<"Nombre: "<<get_nombre()<<" Edad: "<<get_edad()<<" Raza: "<<get_raza()<<endl;
    }
};
int main() {
    // Crear obj Perro con Name, edad, raza
    perro p("Cami",12, "Boxer");
    // Mostrar su nombre y raza
    cout<<"Nombre: "<<p.get_nombre()<<" Raza: "<<p.get_raza()<<endl;
    // Modificar su raza
    p.setraza("Mestizo");
    // Toda su infomacion
    p.informacion();
}