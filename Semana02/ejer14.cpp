#include <iostream>
using namespace std;
enum seasons
{
    autumn,    winter,    spring,    summer
};
int main()
{
    seasons estacionActual = winter;
    switch (estacionActual)
    {
    case autumn:
        cout << "Es otoño";
        break;
    case winter:
        cout << "Es invierno";

        break;
    case spring:
        cout << "Es primavera";
        break;
    case summer:
        cout << "Es VERANO";
        break;
    }
    return 0;
}
