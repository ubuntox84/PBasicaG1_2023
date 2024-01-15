#include <iostream>
using namespace std;
int main()
{
    int numero = -7;
    int p;
    p+=numero;
    {
        int y=100;
    }
    int respuesta=p+numero+y;
    {
        int numero;
    }
    return 0;
}