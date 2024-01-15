
#include <iostream>
using namespace std;
int main()
{
    int a=5;
    int x=a++;
    int y=++a;
    int b= x+y ;
    cout<<x<<"\t"<<y<<endl;
    cout<<a<<"\t"<<b;
    return 0;
    //7 -  12
}