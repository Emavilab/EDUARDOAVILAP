#include <iostream>
using namespace std;

int main() {
    int cantidad;
    float costo_unitario, total_pagar;

    std::cout << "Ingrese la cantidad de teclados a comprar: ";
    std::cin >> cantidad;

    if (cantidad > 8) {
        costo_unitario = 85.0;
    } else if (cantidad >= 4) {
        costo_unitario = 90.0;
    } else {
        costo_unitario = 100.0;
    }

    total_pagar = cantidad * costo_unitario;

    std::cout << "Cantidad de teclados a comprar: " << cantidad << std::endl;
    std::cout << "Total a pagar: " << total_pagar << " Lempiras" << std::endl;

    return 0;
}

