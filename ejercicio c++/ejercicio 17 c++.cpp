#include <iostream>
using namespace std;


int main() {
    double montoPrestamo;
    int numMeses;
    double tasaInteres = 0.02; // Tasa de inter�s mensual (2%)

    // Solicitar el monto del pr�stamo y el n�mero de meses al usuario
    std::cout << "Ingrese el monto del prestamo: ";
    std::cin >> montoPrestamo;
    std::cout << "Ingrese el numero de meses: ";
    std::cin >> numMeses;

    // Calcular el inter�s
    double interes = montoPrestamo * tasaInteres * numMeses;

    // Imprimir el resultado
    std::cout << "El interes a pagar es: " << interes << std::endl;

    return 0;
}

