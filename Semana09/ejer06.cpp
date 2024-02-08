#include <iostream>
using namespace std;

int main() {
    int tamano = 5;
    int* v = new int[tamano];
    for (int i = 0; i < tamano; ++i) {
        v[i] = i * 2;
    }
    cout << "Elementos del arreglo v[]: ";
    for (int i = 0; i < tamano; ++i) {
        cout << v[i] << " ";
    }
    std::cout << std::endl;
    delete[] v;
    return 0;
}
