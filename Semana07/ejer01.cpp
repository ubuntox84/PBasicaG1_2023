#include <iostream>
#include <ctime>

using namespace std;

void mostra(){
    
}

int main()
{
    // Obtener la fecha del sistema
    time_t tiempoActual = time(0);
    tm *fecha = localtime(&tiempoActual);

    // Formatear y mostrar la fecha
    if (fecha != nullptr)
    {
        int dia = fecha->tm_mday;
        int mes = fecha->tm_mon + 1;      // El mes se representa de 0 a 11
        int anio = fecha->tm_year + 1900; // Ajustar el año

        // Mostrar la fecha en formato dd-mm-yyyy
        cout << "Fecha del sistema: ";
        cout << (dia < 10 ? "0" : "") << dia << "-";
        cout << (mes < 10 ? "0" : "") << mes << "-";
        cout << anio << endl;
    }
    else
    {
        cerr << "No se pudo obtener la fecha del sistema." << endl;
        cout<<"Aqui";
    }
        

    return 0;
}
