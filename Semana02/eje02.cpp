#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout << "Digite un numero: ";
    cin >> numero;
    if (numero % 2 == 0)
    {
        cout << "el numero es par: ";
    }
    else
    {
        cout << "el numero es impar";
    }
    return 0;
}