#include<iostream>
using namespace std;
int main(){
    double bmayor,bmenor,h;
    double area;
    cout<<"ing. Base mayor ";
    cin>>bmayor;
    cout<<"ing. Base menor ";
    cin>>bmenor;
    cout<<"ing. altura ";
    cin>>h;
    area=((bmayor+bmenor)*h)/2;
    cout<<"El area de trapecio es: "<<area;
    return 0;
}