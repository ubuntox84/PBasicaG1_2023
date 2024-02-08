#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iterator> //para utilizar begin - end
#include <vector> 
#define N 5
using namespace std;
void llenar(int v[]){
    int M=10, m=1;
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        v[i]=m+(rand()%(M-m+1));
    }    
}

void mostrar(const int *inicio, const int *fin){
    for(const auto &elemento : vector<int>(inicio, fin)){
        cout<<elemento<<"\t";
    }
    cout<<endl;
}

void ordenarBurbuja(int v[]){
    bool band=true;
    int temp;
    for (int i = 0; i < N-1; i++)
    {
        for (int j = i+1; j < N-1; j++)
        {
            if(v[i]>v[j]){
                temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
        
    }
    
    
}

int main()
{    
    int vect[N];
    llenar(vect);
    mostrar(begin(vect), end(vect));
    ordenarBurbuja(vect);
    mostrar(begin(vect), end(vect));
    return 0;
}