#include <iostream>
#include <chrono>
#include <iomanip>

using namespace std;

int main() {
    // Obtener la fecha actual
    auto tiempoActual = chrono::system_clock::to_time_t(chrono::system_clock::now());
    tm* fecha = std::localtime(&tiempoActual);

    if (fecha != nullptr) {
        // Formatear y mostrar la fecha
        cout << "Fecha del sistema: ";
        cout << setfill('0') << setw(4) << fecha->tm_mday << "-";
        cout << setfill('0') << setw(4) << fecha->tm_mon + 1 << "-";
        cout << fecha->tm_year + 1900 << endl;
    } else {
        std::cerr << "No se pudo obtener la fecha del sistema." << std::endl;
    }

    return 0;
}