#include <iostream>
using namespace std;
int main()
{
    char p='X';
    int x=int(p);
    cout<<x<<"\t"<<p<<endl;

    int y=34;
    char q=(char)y;
    cout<<y<<"\t"<<q;    
    return 0;
}