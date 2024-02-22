#include <iostream>
#include <string>

using namespace std;

class padre{
    private:
    int a;
    int b;
    public:
    padre(int, int);
    virtual void metodo();
};
padre::padre(int x,int y){
    this->a=x;
    this->b=y;
}
padre:metodo(){
    cout<<"saludar";
}