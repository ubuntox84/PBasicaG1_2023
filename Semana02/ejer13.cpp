#include <iostream>
using namespace std;
int main()
{
    int x=10;
    int *p;
    p=&x;
    cout<<"Valor de X:\t"<<x<<endl;
    cout<<"Direccion de X:\t"<<&x<<endl;
    cout<<"P:\t"<<p<<endl;
    cout<<"Valor de P:\t"<<*p<<endl;
    *p=20;
    cout<<"Valor de X:\t"<<x<<endl;
    cout<<"Direccion de X:\t"<<&x<<endl;
    return 0;
}