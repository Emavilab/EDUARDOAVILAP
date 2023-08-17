#include <iostream>

int main() {
    int numero;
    int totalAsteriscos = 0;

    std::cout << "Ingrese un numero entre 1 y 8: ";
    std::cin >> numero;

  
    if (numero < 1 || numero > 8) {
        std::cout << "Numero invalido. Debe ser entre 1 y 8." << std::endl;
        return 0;
    }

    
    for (int i = 1; i <= numero; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << "* ";
            totalAsteriscos++;
        }
        std::cout << std::endl;
    }

    std::cout << "Total de asteriscos: " << totalAsteriscos << std::endl;

    return 0;
}
