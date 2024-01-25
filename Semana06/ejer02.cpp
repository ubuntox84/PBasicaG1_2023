#include <iostream>
#include <ctime>
#include <vector>
using namespace std;
struct Alumno{
    string name;
    string faculty;
    double nota[5];
};
int main()
{
    Alumno lista[10];
    lista[0].name="Jose";
    lista[0].faculty="System";
    lista[0].nota[0]=1;
    lista[0].nota[1]=8;
    lista[0].nota[2]=11;
    lista[0].nota[3]=11;
    lista[0].nota[4]=13;
    return 0;
}