#include <iostream>
#include <ctime>

using namespace std;

void funcion(int a=4,int b=8, int c=5){
    cout<<a<<'\t'<<b<<'\t'<<c<<endl;
}

int main()
{
    funcion(10,20,100);
    return 0;
}