#include <iostream>
using namespace std;


int main() {
    int numero;

    std::cout << "Ingrese un número entero del 1 al 12: ";
    std::cin >> numero;

    std::cout << "Tabla de multiplicar del número " << numero << ":" << std::endl;

    for (int i = 1; i <= 10; i++) {
        int resultado = numero * i;
        std::cout << numero << " x " << i << " = " << resultado << std::endl;
    }

    return 0;
}

