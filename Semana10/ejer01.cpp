#include <iostream>
using namespace std;
class persona{
    public:
    string name;
    int year;
    //constructor 
    persona(string n, int y){
        this->name=n;
        this->year=y;
    }
    persona(string n){
        this->name=n;
        this->year=0;
    }
    persona(){
        this->name="";
        this->year=0;
    }
    void mostrar(){
        cout<<"Nombre: "<<this->name<<" Edad: "<<this->year<<endl;
    }
};
int main() {
    persona p1("Juan",18);
    p1.mostrar();
    persona p2("Luis");
    p2.mostrar();
    
}