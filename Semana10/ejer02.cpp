#include <iostream>
using namespace std;
class suma{
    public:
    int a;
    int b;

    //constructor
    suma(int n1,int n2){
        this->a=n1;
        this->b=n2;
    }
    int sumar(){
        return a+b;
    }
    int valora(){
        return a;
    }
    int valorb(){
        return b;
    }
};

int main() {
    suma s(5,6);

    cout<<"La suma es: "<<s.sumar();    
}