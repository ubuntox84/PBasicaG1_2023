#include <iostream>
using namespace std;
class soldado{
    private:
    string name;
    int nivel;
    public:
    soldado(string n):name(n),nivel(100){}
    void disparo(){
        if(this->nivel>0){            
            nivel-=20;
            cout<<"\nAhhhh, me dio un disparo!!!!, ";
            cout<<"Nivel de vida:\t"<<this->nivel;
        }else{
            cout<<"\nSoldado caido!!";
        }
    }
    void informacion(){
        cout<<"Tipo de soldado:\t"<<this->name;
        cout<<"\nNivel de vida:\t"<<this->nivel<<endl;
    }
};
int main(){
    soldado t1("Terran");
    soldado t2("Terran");
    soldado t3("Terran");
    soldado t4("Terran");
    soldado t5("Terran");
    soldado t6("Terran");
    t1.informacion();
    t1.disparo();
    t1.disparo();
    t1.disparo();
    t1.disparo();
    t1.disparo();
    t1.disparo();
    t1.disparo();
    return 0;
}
