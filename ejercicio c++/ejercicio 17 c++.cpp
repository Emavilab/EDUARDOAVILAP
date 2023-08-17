#include <iostream>
using namespace std;


int main() {
    double montoPrestamo;
    int numMeses;
    double tasaInteres = 0.02; // Tasa de interés mensual (2%)

    // Solicitar el monto del préstamo y el número de meses al usuario
    std::cout << "Ingrese el monto del prestamo: ";
    std::cin >> montoPrestamo;
    std::cout << "Ingrese el numero de meses: ";
    std::cin >> numMeses;

    // Calcular el interés
    double interes = montoPrestamo * tasaInteres * numMeses;

    // Imprimir el resultado
    std::cout << "El interes a pagar es: " << interes << std::endl;

    return 0;
}

