#include <iostream>


void determinarParImpar(int* numero) {
    if (*numero % 2 == 0) {
        std::cout << "El numero ingresado es PAR." << std::endl;
    } else {
        std::cout << "El numero ingresado es IMPAR." << std::endl;
    }
}

int main() {
    int numeroIngresado;

    std::cout << "Ingrese un numero entero: ";
    std::cin >> numeroIngresado;

    determinarParImpar(&numeroIngresado); 

    return 0;
}

