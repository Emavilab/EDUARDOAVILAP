#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <cmath>


bool esPrimo(int numero) {
    if (numero <= 1)
        return false;
    
    for (int i = 2; i <= sqrt(numero); i++) {
        if (numero % i == 0)
            return false;
    }
    return true;
}

int main() {
    
    std::srand(std::time(0));

   
    int tamanoVector;
    std::cout << "Ingrese el tamaño del vector: ";
    std::cin >> tamanoVector;

   
    std::vector<int> numeros(tamanoVector);

    
    for (int i = 0; i < tamanoVector; i++) {
        numeros[i] = std::rand() % 1000 + 1;
    }

    
    int contadorPrimos = 0;
    for (int i = 0; i < tamanoVector; i++) {
        if (esPrimo(numeros[i])) {
            contadorPrimos++;
        }
    }

    
    std::cout << "Vector generado: ";
    for (int i = 0; i < tamanoVector; i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    
    std::cout << "Cantidad de numeros primos en el vector: " << contadorPrimos << std::endl;

    return 0;
}

