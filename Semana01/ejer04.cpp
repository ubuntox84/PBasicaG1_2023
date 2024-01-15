#include<iostream>
#include<cmath>

using namespace std;
int main(){
    //const float PI=3.1416;
    float radio, longitud;
    cout<<"Ingrese el radio: ";
    cin>>radio;
    longitud=2.0*radio*M_PI;
    cout<<"La longitud del circulo es: "<<longitud;
    return 0;
}