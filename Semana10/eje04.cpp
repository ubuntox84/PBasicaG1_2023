#include <iostream>
using namespace std;

class casa{
    private:
    int var1;
    int var2;
    public:
    casa(int x,int y):var1(x),var2(y){}
    int getvar1(){
        return var1;
    }
    void setvar1(int newvalor){
        this->var2=newvalor;
    }
    void suma(){
        cout<<"La suma es: "<<(var1+var2);
    }
    void informacion(){
        cout<<var1<<"  "<<var2<<endl;
    }
};
int main(){
    casa c1(5,6);
    c1.informacion();
    cout<<c1.getvar1()<<endl;
    c1.setvar1(10);
    c1.informacion();
    return 0;
}
