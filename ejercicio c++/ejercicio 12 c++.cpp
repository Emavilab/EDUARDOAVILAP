#include <iostream>
using namespace std;


int main() {
    int numero;

    std::cout << "Ingrese un n�mero entero del 1 al 12: ";
    std::cin >> numero;

    std::cout << "Tabla de multiplicar del n�mero " << numero << ":" << std::endl;

    for (int i = 1; i <= 10; i++) {
        int resultado = numero * i;
        std::cout << numero << " x " << i << " = " << resultado << std::endl;
    }

    return 0;
}

